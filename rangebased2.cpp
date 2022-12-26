#include<iostream>
using namespace std;
int main()    //code initialisation
{ 
    int arr[5]={10,20,30,40,50};  //array is created
    for(int &x:arr)   //for loop is created
         x=x*2;   //array values are modified
    for(int x:arr)   //loop is created for displaying the output 
    cout<<x<<" ";   //output is dispalyed
    return 0;  //code termination 
}