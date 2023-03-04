// for finding max and min in array
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={5,6,20,0,4,8};  //array is defined 
    cout<<*(max_element(arr,arr+6))<<endl;  //output for maximum element 
    cout<<*(min_element(arr,arr+6))<<endl;  //output for element element 
    return 0;
}