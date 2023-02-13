#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v{10,5,3,6,1};  //vector
    int res=count_if(v.begin(),v.end(),[](int x){return x>=10;}); //lembda expression is caught
    cout<<res<<" ";
    return 0;
}