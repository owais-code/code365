#include <iostream>
#include<cmath>
#define min(a,b) ((a>b) ? b : a)
#define max(a,b) ((a>b) ? a : b)
using namespace std;


double f(double x)
{
	return x*x*x -x -1;
}

void secant(double a, double b)
{
	double x;
  	cout<<"Enter accuracy upto how much decimal places: ";
 	cin>>x;
	cout<<"\n";
	if(f(a)*f(b) >= 0) 
	{
		cout << "Incorrect intervals chosen" << endl;
		return;
	}
	double c;
	int i = 1;
	while(true)
	{
		c = (a*f(b) - b*f(a))/(f(b)-f(a));
		cout << "Iteration " << i << "\tRoot for this iteration = " << c << endl;
		i++;
		if(abs(c-a)<pow(10, -(x)) || abs(b-c)<pow(10, -(x)))
			break;
		else if(f(c) == 0.00)
			break;
		a = b;
		b = c;	
	}
	cout << "\nThe root of the equation correct to "<<x<< " decimal places is " << b << endl;
	return;
}

int main()
{
	double a,b,c,d;
	cout << "Enter the interval a: ";
	cin>>c;
	cout << "Enter the interval b: ";
	cin>>d;
	a = min(c,d);
	b = max(c,d);
	secant(a,b);
	return 0;
}