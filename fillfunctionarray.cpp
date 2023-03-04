#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40};  //array is defined 
    fill(arr,arr+4,5);  //fill function called 
    for(int x:arr)
    {
        cout<<x<<endl;
    }
    return 0;

}