#include<iostream>
using namespace std;
template<class T>  //template taking argument as data type
T arrmax(T arr[],int n)  //template function of return type T
{
    T res=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>res)
        {
            res=arr[i];
        }
    }
    return res;
}
int main()
{
    int arr1[]={10,15,40,30};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    cout<<arrmax<int>(arr1,n)<<endl;  //passing int as parameter 
    float arr2[]{10.2,15.2,13.6,18.6,52.15}; //array of float type 
    int p=sizeof(arr2)/sizeof(arr2[0]);  //size  
    cout<<arrmax<float>(arr2,p)<<endl;  //output passing float as parameter
    return 0;
}