#include<iostream>
#include<unordered_set>
using namespace std;
//naive solution
void naive(int arr[],int brr[],int m,int n)
{
   
    for(int i=0;i<n;i++)
    {  bool flag=false;
        for(int j=0;j<m;j++)
        {
            if(arr[i]==brr[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==true)
        {
            cout<<arr[i]<<" ";
        }
    }
}

//efficient solution
void eff(int arr[],int brr[],int n,int m)
{
    unordered_set<int> s;
    for(int i=0;i<m;i++)
    {
        s.insert(brr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(s.find(arr[i])!=s.end())
        {
           cout<<arr[i]<<" ";
        }
    }
}
int main()
{
  int arr[]={10,15,20,25,30,50};
  int brr[]={30,5,15,80};
  int n=sizeof(arr)/sizeof(arr[0]);
  int m=sizeof(arr)/sizeof(arr[0]);
  naive(arr,brr,n,m);
  eff(arr,brr,n,m);
  return 0;
}