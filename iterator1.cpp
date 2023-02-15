#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v{10,20,30,40,50};  //vector is created of type int 
    vector<int>::iterator i=v.begin();  //iterator is created 
    cout<<(*i)<<endl;  //iterator is acting as pointer 
    i++;
    cout<<(*i)<<endl;
    i=v.end(); //returns the iterator address of the end beyond the last element 
    i--;
    cout<<*i<<endl;
    return 0;
}