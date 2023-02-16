#include<utility>
#include<iostream>
using namespace std;
int main()
{
    pair <int,int> p;  //construcor is called and since no value is provided it is initialised to 0,0
    pair <int,float> s;  //second pair is created for int and float type
    s={10,20.5}; //values is assigned to that pair 
    cout<<p.first<<" "<<p.second<<endl;  //elements are accessed using first and second
    cout<<s.first<<" "<<s.second<<endl;  //elements are accessed using ffirst and second 
    return 0;
}