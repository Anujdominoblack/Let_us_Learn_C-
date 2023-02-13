#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    vector <int> v{10,2,4,20};
    int res=accumulate(v.begin(),v.end(),0);
    cout<<res<<" ";
    res=accumulate(v.begin(),v.end(),[](int x,int y){return x*y;});
    cout<<res;
    return 0;


}