#include<iostream> //comaprison of two strings 
using namespace std;  
int main()
{
   string s1,s2;  //two strings are decalred 
   s1="abc";  //s1 is defined 
   s2="bcd";  //s2 id defined 
   if(s1==s2)  //conditions 
   {
    cout<<"the two strings are  same"<<endl;
   }
   else if(s1<s2)
   {
    cout<<"s2 is larger than s1"<<endl;
   }
   else
   cout<<"string s1 is larger than s2"<<endl;
   return 0;
}