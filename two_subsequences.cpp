//https://codeforces.com/contest/1602/problem/A

#include <bits/stdc++.h>
using namespace std;

void professor()
{
    string str;
    cin >> str;
    string st = str;
    sort(st.begin(), st.end());

    cout << st[0] << " ";

    char t = st[0];

    int f = 1;

    for (int i = 0; i < str.size(); i++)
    {

        if (str[i] == t)
        {
            f--;
            if (f < 0)
                cout << str[i];
        }
        else
            cout << str[i];
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        professor(); 
    }
}
