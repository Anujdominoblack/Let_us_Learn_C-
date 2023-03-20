#include<iostream>
#include<unordered_set>
using namespace std;
//naive solution
bool ispair(int arr[],int n,int sum)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
               return true; 
            }
        }
    }
    return false;
}
// efficient solution
bool eff(int arr[],int n,int sum)
{
    unordered_set <int> s;
    for(int i=0;i<n;i++)
    {
        if(s.find(sum-arr[i])==s.end())
        {
                return true;
        }
        else{
            s.insert(arr[i]);
        }
    }
    return false;
    
}
int main()
{
    int arr[]={3,2,8,15,-8};
    int n=sizeof(arr)/sizeof(arr[0]);
   cout<< ispair(arr,n,17);
   cout<< eff(arr,n,17);
    return 0;
}