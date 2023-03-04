#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="anuj"; //string is created
    fill(s.begin(),s.end(),'p');  //fill function is called
    cout<<s;  //output
    return 0;
}