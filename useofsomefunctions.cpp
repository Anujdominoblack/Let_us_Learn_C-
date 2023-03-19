#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set <int> s;  //unordered set
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    for(auto it=s.begin();it!=s.end();it++)  //iterator for traversing
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<s.size()<<" ";  //prints the size
    s.clear();
    cout<<s.size()<<" ";
    return 0;
}