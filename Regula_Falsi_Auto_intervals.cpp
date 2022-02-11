#include <iostream>
#include <cmath>
#define min(a,b) ((a>b) ? b : a)
#define max(a,b) ((a>b) ? a : b)
using namespace std;

double f(double x)
{
  return x*x - (5.5)*x + 6;
}

int regula(double a,double b)
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
    c = (a+b)/2;
    cout << "\nIteration " << i << "\tRoot = " << c << endl;
    cout << a <<" "<< b << endl;
    i++;
    
    if(abs(c-a)<pow(10, -(x)) || abs(b-c)<pow(10, -(x)))
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
  cout << "\n\nThe root of the equation correct to input decimal places is " <<c<<endl;
  return 0;
}

int main()
{
  double a,b,c,d;
  if(f(0)<0)
  {
  for(int i = 0; ; i++)
    {
        if(f(i)>0)
            {
                c =i;
                d= 0;
                break;
            }    
    }
  }
  else
    for(int i = 0; ; i--)
    {
        if(f(i)<0)
            {
                c =0;
                d= i;
                break;
            }    
    }
    a = min(c,d);
    b = max(c,d);
  regula(a,b);
  return 0;
}
