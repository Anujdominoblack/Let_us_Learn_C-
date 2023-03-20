#include<iostream>
#include<unordered_set>
using namespace std;
//efficient solution
int maxDistinct(int arr[],int n,int k)
{
    unordered_set <int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);

    }
    int d=s.size();
    if(d>=n/k)
    {
        return n/k;
    }
    else{
        return d;
    }
}
int main()
{
    int arr[]={1,1,2,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    cout<<maxDistinct(arr,n,k);
    return 0;
}