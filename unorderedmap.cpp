#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map <string,int> m;  //it stores includes the elemesnts in any order
    m["code for help"]=20;
    m["ide"]=30;
    m.insert({"courses",153});
    for(auto x:m)
    {
        cout<<x.first<<" "<<x.second<<endl; 
    }
    return 0;
}