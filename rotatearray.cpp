#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50,60};  //array is declared
    rotate(arr,arr+2,arr+6);  //rotate function is called
    for(int x:arr)  //loop for traversal
    {
        cout<<x<<endl;  //output
    }
    return 0;

}