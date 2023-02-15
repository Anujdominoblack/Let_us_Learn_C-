#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={10,20,30,40,50};  //vector is declared
    vector<int>::iterator i=v.begin();   //iterator is created 
    cout<<(*i)<<endl;  //value of iterator is displayed 
    i=next(i);  //next function is used tp move the iterator position ahead 
    cout<<(*i)<<endl;  //value of iterator is displayed
    i=next(i,2); //gives the address of 2 element ahead
    cout<<(*i)<<endl; //output
    i=prev(i);  //gives the address of just previous element 
    cout<<(*i)<<endl;//output
    return 0;
}