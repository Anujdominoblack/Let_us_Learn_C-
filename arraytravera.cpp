#include<iostream>
using namespace std;
int main()
{
    int arr[]{10,20,30}; //initializer list initilsation  
    for(int &x:arr)   //for loop creation 
        x=x*2;  //modification 
    for(int x:arr)   //for loop for traversal 
    cout<<x<<" ";
    return 0;
}