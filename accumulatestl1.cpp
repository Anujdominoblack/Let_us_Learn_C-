//accumalate is used to find sum of all elements in the container by default
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main()
{
    vector<int> v={10,20,30};
    int res=0;
    cout<<accumulate(v.begin(),v.end(),res)<<endl;  //it all sum of elements in res which is predefined 
    return 0;
}