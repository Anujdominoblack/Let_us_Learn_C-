#include<iostream>
using namespace std;
int main()
{
    string str="kingdominic";  //string is created
    int res=str.find("queen");  //str.find
    if(res==string::npos)  //n pos is a specialconstant
    {
        cout<<"it is not present"<<endl;  //output
    }
    else{
        cout<<"first occurences is at index"<<" "<<res<<endl;   //output
    }
    return 0;
}