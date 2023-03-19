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
    s.erase(s.begin(),s.end());
    return 0;
}