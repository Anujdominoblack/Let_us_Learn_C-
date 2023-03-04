#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={10,20,20,20,30,40};
    int *ptr=lower_bound(arr,arr+6,20);  //can use auto here also
    cout<<(*ptr)<<endl;
    ptr=lower_bound(arr,arr+6,25);  // it
    cout<<(*ptr)<<endl;
    return 0;

}