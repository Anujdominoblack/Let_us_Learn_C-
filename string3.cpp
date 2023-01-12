#include<iostream> //two read string after spaces 
using namespace std;
int main()   
{
    string name;  //string is decalred 
    cout<<"enter your name "<<endl;  
    getline(cin,name);  //it is used to read string with spaces 
    cout<<"your name is "<<name<<endl;  //output is declared 
    return 0;
}