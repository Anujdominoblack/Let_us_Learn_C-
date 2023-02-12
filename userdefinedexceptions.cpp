#include<iostream>
using namespace std;
class arraysizezeroexception{}; //user defined exception classs
class arraysizeisnegative{};  //user defined exception class
int average(int arr[],int n)  //average function is created
{
    if(n==0)
    {
        throw arraysizezeroexception();  //exception is thrown
    }
    if(n<0)
    {
        throw arraysizeisnegative();  //exception is thrown
    }
    int sum=0;  
    for(int i=0;i<n;i++) //loop for calculating sum of array elements
    {
        sum=sum+arr[i];
    }
    return sum/n; //averge is returned
}
int main()
{
    int n,res;
    cin>>n;  //array size is given
    int arr[n];  //array is defined 
    for(int i=0;i<n;i++)  //array is taken as input
    {
        cin>>arr[i];
    }
    try{  //try block
        res=average(arr,n);
        cout<<res;
    }
    catch(arraysizeisnegative e1) //catch block for exception
    {
       cout<<"array size is neagtive ";
    }
    catch(arraysizezeroexception e2) //catch block for exception
    {
        cout<<"array size is zero ";
    }
    cout<<"bye";
    return 0;

}