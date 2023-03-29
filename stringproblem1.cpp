//problem find the digits after the decimal point
#include<iostream>
using namespace std;
string afterdecimal(string no)
{
    int pos=no.find(".");
    if(pos==string::npos)
    {
        return " ";
    }
    else
    {
        return no.substr(pos+1);
    }

}
int main()
{
    string no;
    cout<<"enter the number whose decimal digits you want to find";
    cin>>no;
    string decimal=afterdecimal(no);
    cout<<decimal;
    return 0;

}