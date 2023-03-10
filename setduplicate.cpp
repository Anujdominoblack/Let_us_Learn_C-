#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int,greater<int>> s;  //set is defined and it sorts the elements in decreasing order
    s.insert(10); //for inserting the elements 
    s.insert(20);
    s.insert(30);
    s.insert(20); //a duplicate element is inserted
    for(int x:s)  //traversal
    {
       cout<<x<<" ";
    }
    return 0;
}
///////***output**////
/////30 20 10 as set ignores the duplicate elements