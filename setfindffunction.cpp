#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    auto it =s.find(35);
    if(it==s.end())
    {
        cout<<"element is not in the set"<<endl;
    }
    else{
        cout<<"element is in the set";
    }
    return 0;
}