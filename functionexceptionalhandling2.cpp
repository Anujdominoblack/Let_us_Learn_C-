#include<iostream>
using namespace std;
int average(int *arr,int n)  //function is made 
{
    if(n==0)
    {
        throw 0; //exception is thrown
    }
    int sum=0;
    for(int i=0;i<n;i++)  //to calculate the sum of elements of the array
    {
        sum=sum+arr[i];  
    }
    int average=sum/n;  //average is calculated
    return average;
}
int main()
{
    int n,res; //two varaibles is created
    cin>>n;  //size of array is created and taken as input
    int arr[n]; //array is created
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];  //array elements are taken as a input
    }
    try{  //to check exception
         res=average(arr,n);
         cout<<res;
    }
    catch(int x) //to catch exception
    {
        cout<<"the array size is zero here ";
    }
   
    return 0;
}