#include<iostream> /*          NO CHANGE IS OBSERVED IN THIS CODE  */
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    for(int x:arr)
         x=2*x;
    for(int x:arr)
         cout<<x<<" ";
         return 0;
}