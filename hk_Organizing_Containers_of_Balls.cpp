// Question link: https://www.hackerrank.com/challenges/organizing-containers-of-balls/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std;

int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin>>t;
        while(t--)
            {
                int q;
                cin>>q;
                long long a[q][q];
                long long a1[q];
                long long a2[q];
                for(int i = 0; i < q; i++)
                    {
                        for(int j = 0; j < q; j++)
                            {
                                cin >> a[i][j];
                            }
                    }

                unsigned long long sum = 0;

                for(int i = 0; i < q; i++)
                    {
                        for(int j = 0; j < q; j++)
                            {
                                sum+=a[i][j];
                            }
                        a1[i] = sum; 
                        sum =0;   
                    }
                    

                for(int i = 0; i < q; i++)
                    {
                        for(int j = 0; j < q; j++)
                            {
                                sum+=a[j][i];
                            }
                        a2[i] = sum;   
                        sum =0; 
                    }
                    sort(a1, a1+q);
                    sort(a2, a2+q);
                for(int i = 0; i<q; i++)
                    {
                        if(a1[i]!= a2[i])
                            {
                                cout<<"Impossible"<<"\n";
                                break;
                            }
                        else
                            {
                                cout<<"Possible"<<"\n";
                                break;
                            }    
                    }    

            }       
        return 0;
    }  
