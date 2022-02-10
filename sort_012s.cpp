//https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/

#include <bits/stdc++.h>
using namespace std;

int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n,e;
        int count0 = 0, count1=0, count2=0;
        cin>>n;
        vector<int> v;

        for(int i = 0; i<n; i++)
            {
                cin>>e;
                v.push_back(e);
            }

        for(int i = 0; i<n; i++) 
            {
                if(v[i] == 0)
                count0++;
                if(v[i] == 1)
                count1++;
                if(v[i] == 2)
                count2++;
            } 

        for(int i = 0; i<count0; i++) 
            {
                cout<<"0 ";
            } 
        for(int i = 0; i<count1; i++) 
            {
                cout<<"1 ";
            } 
        for(int i = 0; i<count2; i++) 
            {
                cout<<"2 ";
            }         
        return 0;
    }        
