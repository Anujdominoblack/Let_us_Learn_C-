#include<iostream>
#include<unordered_set>
using namespace std;
 //naive solution 

 void print1(int arr[],int n)
 {
    for(int i=0;i<n;i++)
    {
        bool flag =false;
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=true;
                break;
            }
        }
        if (flag==true)
        {
            cout<<arr[i]<<" ";
        }
    }
 }

 // efficient solution
 void eff(int arr[],int n)
 {
    unordered_set <int> s;
    for(int i=0;i<n;i++)
  {
    if(s.find(arr[i])==s.end())  //it checks and insert the repeating the element 
    {
        s.insert(arr[i]);
    }
    else{
        cout<<arr[i]<<endl;
    }
  }
 }
 int main()
 {
    int arr[]={10,8,10,7,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    print1(arr,n);
    eff(arr,n);
    return 0;

 }