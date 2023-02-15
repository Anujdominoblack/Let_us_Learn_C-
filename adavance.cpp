#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={10,15,21,34,56,58};  //vector is displayed
    vector<int>::iterator i=v.begin();  //ierator is created
    cout<<(*i)<<endl; //output
    advance(i,3); //it returns address of 3 element ahead
    cout<<(*i)<<endl; //output
    return 0;
}