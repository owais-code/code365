/*What is the maximum number of squares of size 2x2 that can be fit in a right angled isosceles triangle of base B.
One side of the square must be parallel to the base of the isosceles triangle.
Base is the shortest side of the triangle*/

#include<iostream>
using namespace std;

void tri(int m)
    {
        int sum =0;
        if(m<4)
            {
                cout<<"0"<<endl;
            }
        else
        {    
            for(int i =1; i<=((m/2)-1); i++)
                {
                    sum+=i;
                }
            cout<<sum<<endl;    
        }
    }

int main()
{
    int t;
    cin>>t;
    while(t--)
        {
            int n;
            cin>>n;
            if(n%2==0)
            {
                tri(n);
            }
            else if(n%2 !=0)
            {
                tri(n-1);
            }


        }
    return 0;
}
