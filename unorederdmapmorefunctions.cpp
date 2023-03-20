#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map <string,int> m;
    m["gfg"]=20;
    m["ide"]=30;
    m["courses"]=15;
    cout<<m.size()<<" ";
    m.erase("ide");
    m.erase(m.begin());
    cout<<m.size()<<endl;
    return 0;
}