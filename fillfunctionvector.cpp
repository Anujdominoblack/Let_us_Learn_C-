// fill is an utility  function that takes a begin and end annd it fill all the values from begin and end with the given element 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={10,20,30,40}; //vector conatiner is defined 
    fill(v.begin(),v.end(),5);  //fill is used
    for(int x:v)  //for traversing and output
    {
        cout<<x<<endl;
    }
    return 0;
}