//266-A - CodeForces - Stones on the table
#include <iostream>
using namespace std;

int main()
{
    int n;
    char s[n];
    cin>>n;
    cin>>s;
    int count =0;
    for( int i =1; i<=n; i++)
        {
            if(s[i] == s[i-1])
                {
                    count++;
                }    
        }
    cout<<count<<endl;    

    return 0;
}
