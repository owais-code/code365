#include<iostream>
using namespace std;
#define game(a) ((a)%2==0 ? printf("Alice") : printf("Bob"))

int main()
    {
        int t;
        while(t--)
            {
                int n;
                cin>>n;
                game(n);
            }
        return 0;    

    }