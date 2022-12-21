#include<iostream>
using namespace std;
int main()
{
    int n; //variables created
    cout<<"enter the value";
    cin>>n;   //variables created
    for(int x=2;x<=n;x++)   //loop created 
    {
        if(n%x==0)    // conditional statement 
        {
            cout<<"it is a divisor "<<x;  //output
            break;  //break statement is used 
        }
    }
    return 0;
}