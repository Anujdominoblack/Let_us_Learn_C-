#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;
    m.insert({5,"name"});
    m.insert({2,"age"});
    m.insert({1,"city"});
    if(m.find(5)==m.end())
    {
        cout<<"not found";
    }
    else{
        cout<<"found";
    }
    return 0;

}