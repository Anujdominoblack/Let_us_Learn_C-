#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int x,int y)  //function for comparing
{
    return abs(x)<abs(y);
}
int main()
{
    int arr[]={2,4,-1,8,-9};  //array
    int n=sizeof(arr)/sizeof(arr[0]);  //sizeof array
    sort(arr,arr+n,compare);  //sorting function is called
    for(int i=0;i<n;i++)  //for displaying loop values
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}