// upper bound an array
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={10,20,20,20,30,40};
    auto it=upper_bound(arr,arr+6,20);  //itertaor 
    cout<<(*it)<<endl;  //output 
    it=upper_bound(arr,arr+6,30);
    cout<<(*it)<<endl;
    return 0;
}