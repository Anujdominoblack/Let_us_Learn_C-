// max and min returns maximum and minimum element of the container
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={10,20,1,40,8,49,86};  //vector is defined
    auto it1=max_element(v.begin(),v.end());  //1st iterator for finding max
    auto it2=min_element(v.begin(),v.end());  //2nd iterator for  finding min
    cout<<(*it1)<<" "<<(*it2)<<endl;  //output
    return 0;
}