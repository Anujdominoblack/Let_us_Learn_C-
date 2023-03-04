// takes two iteration which represnt begining and end it workss only on sorted
//returns an iterator having address of element greater than eqaul to given value in a given storage range


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={10,20,20,20,30,40};  //vector is declared 
    auto it=lower_bound(v.begin(),v.end(),20);  //iterator and lower found function is called
    cout<<(*it)<<endl;  //output 
    it =lower_bound(v.begin(),v.end(),25);
    cout<<(*it)<<endl;
    return 0;

}