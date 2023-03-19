// print distinct elements of an array
#include<iostream>
#include<unordered_set>
using namespace std;
//naive solution
void print1(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
        {
            cout<<arr[i]<<" ";
        }
    }
}
//efficient solution
void eff(int arr[],int n)
{
    unordered_set <int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    for(int x:s)
    {
        cout<<x<<" ";
    }
}
int main()
{
    int arr[]={4,8,5,8,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    print1(arr,n);
    eff(arr,n);
    return 0;
}