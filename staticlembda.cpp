#include<iostream>
using namespace std;
int main()
{
    static int x=5,y=20;
    auto lembda=[](int a){ x=x+a;  //lembda exprrsssion
                           y=y+a;};
    cout<<x<<" "<<y;  //output
    return 0;
}