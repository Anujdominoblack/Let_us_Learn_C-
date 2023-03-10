#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int,greater<int>> s;  // greater<int> sorts the set in decreasing order
    s.insert(10); //used for inserting elements in the set
    s.insert(15);
    s.insert(20);
    s.insert(25);
    for(int x:s)  //used for traversing
    {
        cout<<x<<" ";
    }
    return 0;
}
