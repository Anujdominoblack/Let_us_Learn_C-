#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);;
    s.insert(40);
    s.erase(30);  //erase function removes an element from the set
    for(int x:s)
    { 
        cout<<x<<endl;    
    }
    return 0;
}