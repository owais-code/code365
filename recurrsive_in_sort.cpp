#include<iostream>
#include<vector>
using namespace std;

void insert(int temp,  vector<int> &v)
    {
        if(v.size() == 0 || temp >= v[v.size()-1])
            {
                v.push_back(temp);
                return;
            }
        int val = v[v.size()-1];
        v.pop_back();
        insert(temp, v);
        v.push_back(val);
    }

void sort(vector<int> &v)
    {
        if(v.size()==1)
            return;

        int temp = v[v.size()-1];
        v.pop_back();
        sort(v);
        insert(temp, v);
    }

int main()
    {
        int n;
        cin>>n;
        int e;
        vector<int> v;
        for(int i =0; i<n;i++)
            {
                cin>>e;
                v.push_back(e);
            }
        sort(v); 
        for(int i =0; i<v.size(); i++)
                {
                    cout<<v[i]<<" ";
                }

    }        
