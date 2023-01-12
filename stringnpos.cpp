#include<iostream>
using namespace std;
int main()
{
    string str; //string declaration 
    cin>>str;  //strin is inpit by the user 
    string n;//substring
    cout<<"enter the substring you want to find"<<endl; 
    cin>>n;  //substring is entered
    int res=str.find(n);  //substring find function
    if(res==string::npos){  //if substring is not present a constant npos is returned 
        cout<<"not present "<<"\n"<<endl;  //output 
    }
    else
    {
        cout<<"first occurance is at index "<<res<<endl; //output is displayed 
    }
    return 0;
       
}