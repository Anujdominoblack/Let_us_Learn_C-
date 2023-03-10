#include<iostream>
#include<set> //for including set librarary
using namespace std;
int main()
{
    set<int> s;  //set is declared
    s.insert(10);  //insert function is used to insert elements in the set container
    s.insert(20);
    s.insert(25);
    for(int x:s) //it is used for iteration and getting output
    {
        cout<<x<<" ";
    }
    return 0;
}
