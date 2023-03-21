//problem is to find the frequencies of element in an array
#include<iostream>
#include<unordered_map>
using namespace std;
void printfreq(int a[],int n)
{
    unordered_map <int ,int> m;
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    for(auto x:m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    

}
int main()
{
    int arr[]={10,15,20,5,10,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    printfreq(arr,n);
    return 0;
}