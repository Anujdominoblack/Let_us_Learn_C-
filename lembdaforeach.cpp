#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v{10,20,30}; //vector is created
    for_each(v.begin(),v.end(),[](int &x){x=x*2;});  //for each function with lembda expression
    for_each(v.begin(),v.end(),[](int x){cout<<x<<" ";});  //for each for traversal
    return 0;

}