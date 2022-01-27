//https://codeforces.com/contest/1631/problem/A
//Runtime: 15ms, space = 0kb

#include <bits/stdc++.h>
using namespace std;

int big(int arr[], int n)
{
    int i;
    int max = arr[0];

    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}    

int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int t;
        cin>>t;
        while(t--)
            {
                int n;
                cin>>n;
                int a[n], b[n];
                for(int i=0;i<n;i++)
                    {
                        cin>>a[i];
                    } 
                for(int i=0;i<n;i++)
                    {
                        cin>>b[i];
                    }         
                    int x = distance(a, max_element(a, a + n));

                for(int i=0;i<n;i++)
                    {
                        if(b[i] > a[i])
                            {
                                swap(a[i],b[i]);
                            }
                        
                    }
                    cout<<(big(a,n))*(big(b,n))<<"\n"; 

            }

        return 0;
    }    
