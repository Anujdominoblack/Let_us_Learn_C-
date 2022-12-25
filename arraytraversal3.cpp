#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,40,30}; //array is created
    int n;  //variable is created
    n=sizeof(arr)/sizeof(arr[0]);  //array size is calculated
    for(int i=0;i<n;i++)   //loopis craeted for modification
    {
        arr[i]=2*arr[i];
    }
    for(int i=0;i<n;i++)  //loop for array traversal 
    cout<<arr[i]<<" "; //display result 
    return 0;
}