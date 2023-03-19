#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set <int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    cout<<s.size()<<endl;
    s.erase(10);  //erase function erases the element from the unordered set
    auto it =s.find(30);
    s.erase(it);
    cout<<s.size()<<endl;
    return 0;
}