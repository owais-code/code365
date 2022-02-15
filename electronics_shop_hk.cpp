//https://www.hackerrank.com/challenges/electronics-shop/submissions/code/256325977

#include <bits/stdc++.h>
using namespace std;

int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> v1;
        vector<int> v2;
        vector<int> v3;
        int t,k,u;
        cin>>t>>k>>u;
        int e;
        for(int i = 0; i<k; i++)
            {
                cin>>e;
                v1.push_back(e);
            }
        for(int i = 0; i<u; i++)
            {
                cin>>e;
                v2.push_back(e);
            }

        for(int i = 0; i<k; i++)
            {
                for (int j = 0; j < u; j++)
                {
                    e = v1[i]+ v2[j];
                    if(e<=t)
                        {
                            v3.push_back(e);
                        }
                }
                
            }
        if(v3.empty())
            {
                cout<<"-1"<<"\n";
            }
        else 
        {   
            sort(v3.begin(), v3.end(), greater<int>());
            cout<<v3[0]<<"\n"; 
        }          



        return 0;
    } 
