// it is similar to lower bound takes sorted range as input 
//return ietrator to the first greater element 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={10,20,20,20,30,40};
    auto it=upper_bound(v.begin(),v.end(),20);
    cout<<(*it)<<endl;
    it=upper_bound(v.begin(),v.end(),30);
    cout<<(*it)<<endl;
    return 0;
}