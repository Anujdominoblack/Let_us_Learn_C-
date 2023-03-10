#include<iostream>
using namespace std;
int main()
{
    int x=5,y=20;
    auto lembda=[=](int a) mutable{x=x+a;
                           y=y+a;};
    lembda(20);
    cout<<x<<" "<<y;
    return 0;
}