#include<iostream>
#include<unordered_map>
using namespace std;
void print(int arr[],int n,int k)
{
   for(int i=0;i<=n-k;i++)
   {
    int count=0;
    for(int j=0;j<k;j++)
    {
        bool flag=false;
        for(int p=0;p<j;p++)
        {
            if(arr[i+j]==arr[i+p])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
        {
            count++;
        }
       
    }
     cout<<count<<" ";
   }
}
int main()
{
    int arr[]={10,20,20,10,30,40,10};
    int k=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n,k);
    return 0;
}