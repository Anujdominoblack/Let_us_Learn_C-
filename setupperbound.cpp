#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
    set<int> s;  //set container is declared
    s.insert(10);
    s.insert(5);
    s.insert(20);
    auto it=s.upper_bound(15);
    if(it!=s.end())
    {
        cout<<(*it)<<" ";
    }
    else
    {
        cout<<"given element is greater then the largest"<<endl;
    }
    return 0;
}