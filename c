#include <bits/stdc++.h>

using namespace std;

int a_sum(int n, int a[])
    {
        if(n <=0)
            {
                return 0;
            }
        else {
            return a_sum(n-1, a) + a[n-1];
            
        }    
    }

int main()
    {
        int t;
        cin>>t;
        int a[t];
        for(int i = 0; i<t; i++)
            {
                cin>>a[i];
            }
        cout<<a_sum(t, a)<<"\n";    
    }
