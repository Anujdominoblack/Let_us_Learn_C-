#include<iostream>
#include<unordered_set>  //unorders set 
using namespace std;
int main()
{
    unordered_set <int> s;
    s.insert(10);  //insert function
    s.insert(20);
    s.insert(30);
    s.insert(50);
    s.insert(80);
    if(s.find(80)==s.end())  // find function is  called
    {
        cout<<"not found";
    }
    else{
        cout<<"found"<<endl;  //output 
    }
    return 0;
}