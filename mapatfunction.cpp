#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int> m; //map is created 
    m.insert({10,200}); //inseet function is called
    cout<<m.size()<<" ";
    m.at(10)=300;
    cout<<m.size()<<" "; //size function is called
    return 0; 
}
