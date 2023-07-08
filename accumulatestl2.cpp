#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
    vector<int> v={10,20,30};
    int res=100;
    cout<<accumulate(v.begin(),v.end(),res,minus<int> ); //it subtracts element 
    return 0;
}