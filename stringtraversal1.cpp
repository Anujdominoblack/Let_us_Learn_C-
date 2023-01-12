#include<iostream>  //string traversal
using namespace std;   
int main()
{
    string s; //string s is decalred 
    cout<<"enter your s tring"<<endl;
    getline(cin,s); //input your string 
    for(int i=0;i<s.length();i++)  //loop for traversal
    {
        cout<<s[i];  //result is output 
    }
    return 0;

}