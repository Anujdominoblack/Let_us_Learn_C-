#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> ms; //multiset container is declared
    ms.insert(10); //insert function is called
    ms.insert(20);
    ms.insert(12);
    ms.insert(6);
    ms.insert(4);
    ms.insert(20);
    for(int x: ms) //for iteration and output
    { 
      cout<<x<<" ";   
    }
    return 0;
}