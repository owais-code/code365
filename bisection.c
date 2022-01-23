//
#include <stdio.h>
#include <math.h>

double f(double x) 
{
	return pow(x,3) - 4*x - 9;
}

int main()
{
	double a,b;
	printf("\nEnter the interval a\n");
	scanf("%lf", &a);
	printf("Enter the interval b\n");
	scanf("%lf", &b);
	
	if(f(a)*f(b) >= 0)
    	{
    		printf("\nInvalid Intervals");
    		return 0;
    	}
    	
	int i = 1;
	double x;
	while((b-a)>0.0001) //close to 0
    	{
    		x = (a+b)/2;
    		printf("\nPerforming iteration %d", i);
    		printf("\n\tRoot: %lf", x);
    		i++;
    		
    		if(f(x) == 0.00)
        		{
        			break;
        		}
    		else if(f(x)*f(a) > 0)
        		{
        			a = x;
        		}	
    		else
        		{
        			b = x;
        		}	
    	}
	printf("\n\nThe root of the equation is found to be %lf", x);
	return 0;
}
