//https://www.codechef.com/problems/NUMGAME
//Remember Game Theory, n: Winning case; n-1: loosing case .............

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
