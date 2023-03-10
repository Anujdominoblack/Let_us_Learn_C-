#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s; //set is declared
    s.insert(10);  //insert function is called for inserting the elements in set
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.clear(); //it clears all the elements from the set
    cout<<s.size()<<endl; //output is 0
    return 0;
}