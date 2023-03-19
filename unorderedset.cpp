#include<iostream>
#include<unordered_set>  //element can be stored in any order
using namespace std;
int main()
{
    unordered_set <int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    for(int x:s)
    {
        cout<<x<<endl;  //output
    }
    return 0;
}