#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={10,2,6,18,8}; //array is created
    int n=sizeof(arr)/sizeof(arr[0]);  //size of array
    sort(arr,arr+n);  //sort function from algorithem
    for(int x:arr)  //array traversal
    {
        cout<<x<<" ";  //output
    }
    cout<<endl;  //for new line
    if(binary_search(arr,arr+n,8))  //for binary search
    {
        cout<<"present";  //output
    }
    else{
        cout<<"not present";  //output
    }
    return 0;
}
