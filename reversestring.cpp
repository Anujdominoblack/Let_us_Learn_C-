#include<iostream>
using namespace std;
int main()
{
    string s; // string  s is declared 
    cin>>s;   //string is taken as input 
    string ne="";   //another string is created for reverse 
    for(int i=s.length()-1;i>=0;i--)   //loop for reversal
         ne=ne+s[i];
    cout<<ne;  //displaying the result
    return 0;
}