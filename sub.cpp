#include <iostream>
using namespace std;


int main()
    {
        int n,k;
        int temp = n;
        cin>>n>>k;
        while(k--)
        {
            if(n%10 == 0)
            {
                n/=10;
            }
        else
            {
                n-=1;
            }  
        }  
        cout<<n<<endl;
        
    }