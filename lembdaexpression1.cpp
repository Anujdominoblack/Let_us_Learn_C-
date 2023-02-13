#include<iostream>
#include<algorithm>
using namespace std;
int main()
{int arr[]={10,20,-30,40,50};  //array 
int n=sizeof(arr)/sizeof(arr[0]);  //array size
  auto mycmp=[](int a,int b){ return abs(a)<abs(b);};  //lembda expression
  sort(arr,arr+n,mycmp);  //sort function
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;


}