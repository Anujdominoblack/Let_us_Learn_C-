#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int> m;  //map container is declared 
    m.insert({10,200});  //insert function
    cout<<m.size()<<" ";
    cout<<m[20]<<" ";
    cout<<m.size()<<" ";  //size function is called  and output 
    return 0;

}