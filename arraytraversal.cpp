#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,40,30,45}; //array initialisation 
    int n=sizeof(arr)/sizeof(arr[0]); //finding the size of an array
    for(int i=0;i<n;i++)  //loop for travesal
    cout<<arr[i]<<" "; //displaying 
    return 0;
}