#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50}; //array is created and value is assigned 
    int *ptr=arr;  //pointer is created and value is assigned 
    cout<<sizeof(arr)<<"\n";   
    cout<<sizeof(ptr)<<"\n ";
    cout<<*(arr+2)<<"\n";
    cout<<ptr[2]<<"\n";
    return 0;
}