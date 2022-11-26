#include<iostream>
using namespace std;
int main()
{
    int i; //LOOP COUNTER
    int n; //NUMBER WHOSE TABLE IS TO BE CALCULATED
    cin>>n; //NUMBER IS ENTERED THROUGH THE KEYBOARD
    i=1; 
    while(i<=10) //LOOP IS STARTED
    {
        cout<<i*n<<endl; //STATEMENT
        i++;//LOOP control
    }  
    return 0;
}