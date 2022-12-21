#include<iostream>
using namespace std;
int main()
{
    int n,x; //two variables created
    cout<<"enter n"; //enter the number upto which you want to count
    cin>>n;  //number is taken input
    cout<<"enter x";  //enter the variable which you want to skip 
    cin>>x;  //number is taken input 
    for(int i=0;i<=n;i++){  //loop is created
        if(i%x==0)   //if statement 
        {  
              continue;  //continue statement is used
        }
        cout<<i<<" "; 
    }
    return 0;
}