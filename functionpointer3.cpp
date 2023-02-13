#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={10,12,9,8,6,4}; //array is declared
    int n=sizeof(arr)/sizeof(arr[0]);  //size of array
    sort(arr,arr+n);   //sorting fuction is called
    for(int i=0;i<n;i++)  //for loop 
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}