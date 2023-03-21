//winner of election
#include<iostream>
#include<unordered_map>
using namespace std;
string findwinner(string arr[],int n)
{
    unordered_map <string,int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    int max=0;string winner;
    for(auto x:m)
    {
        if(x.second>max)
        {
            max=x.second;
            winner=x.first;
        }
    }
    return winner;
}
int main()
{
    string arr[]={"abc","xyz","abc","pqr"};
    int n =sizeof(arr)/sizeof(arr[0]);
    cout<<findwinner(arr,n);
    return 0;
}