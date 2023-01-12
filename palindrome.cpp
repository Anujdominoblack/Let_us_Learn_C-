 // a check a number is palindrome is not 
#include<iostream>
using namespace std;
int main()
{
    string s;  //the number or character is entered 
    cin>>s;
    string n="";
    for(int i=s.length()-1;i>=0;i--)  //loop for reversal
    n=n+s[i];
    if(n==s)
    cout<<"its a palindrome number "<<endl; //result is dispalyed
    else
    cout<<"its not"; //result is displayed 
    return 0;
}