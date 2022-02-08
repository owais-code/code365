#include <iostream>
#define cin std::cin 
#define cout std::cout
#define leaps(n) ((n%4==0 && n%100!= 0? "yes" : "no"))
#define leap(n) ((n%400==0 && n%100== 0)? "yes" : leaps(n))

int main()
{
    int t;
    cin >> t;
    cout<<leap(t);
}
