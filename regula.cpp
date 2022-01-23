#include <iostream>
#include <cmath>
#define min(a,b) ((a>b) ? b : a)
#define max(a,b) ((a>b) ? a : b)
using namespace std;

double f(double x)
{
  return pow(x,3) - 2*x - 5;
}

int regula_falsi(double a,double b)
{
  double x;
  cout<<"Enter accuracy upto how much decimal places: ";
  cin>>x;
  if(f(a)*f(b) >= 0)
  {
    cout << "\nIncorrect intervals chosen";
    return 0;
  }
  double c;
  int i = 1;
  while(true)
  {
    c = (a*f(b) - b*f(a))/(f(b)-f(a));
    cout << "\nIteration " << i << "\tRoot = " << c << endl;
    cout << a <<" "<< b << endl;
    i++;
    if((c-a)<pow(10, -(x+1)))
        {
            break;
        }
    
    if(f(c) == 0.00)
    {
      break;
    }
    else if(f(c)*f(a) < 0)
    {
      b = c;  
    }
    else
    {
      a = c;
    }
  }
  cout << "\n\nThe root of the equation correct to 4 decimal places is " <<c<<endl;
  return 0;
}

int main()
{
  double c,d,a,b;
  cout << "Enter the intervals"<<endl;
  cout<<"a : "; cin>>c;
  cout<<"b : "; cin>>d;
  a = min(c,d);
  b = max(c,d);
  
  regula_falsi(a,b);
  return 0;
}
