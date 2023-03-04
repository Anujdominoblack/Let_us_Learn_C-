// we will use find function to elements in an array container
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={5,10,7,10,10,20};
    int *ptr=find(arr,arr+6,10);  //pointer is created to iterate
    if(ptr==arr+6)
    {
        cout<<"not found"<<endl;
    }
    else{
        cout<<"found at "<<(ptr-arr);
    }
}