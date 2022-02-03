https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem?h_r=profile

include <bits/stdc++.h>
using namespace std;

int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        set<int> a1;
       // vector<int> a2;
        int m,n;
        cin>>m;
        for(int i = 0; i <m; i++)
            {
                int e;
                cin>>e;
                a1.insert(e);
            }

        cin>>n;
        vector<int> a2(a1.begin(), a1.end());
        for(int i = 0; i <n; i++)
            {
                int e;
                cin>>e;
                int pos = upper_bound(a2.begin(), a2.end(), e) - a2.begin();
                cout<<(int)a2.size() - pos + 1<<"\n";


            }    
    }        
