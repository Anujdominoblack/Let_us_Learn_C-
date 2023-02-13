#include<iostream>
using namespace std;
int main()
{
    int x=5,y=10;
    auto lembda=[&](int a){x=x+a;   //lembda expession
                           y=y+a;};
    lembda(20);  //lembda call 
    cout<<x<<" "<<y;
    return 0;
}