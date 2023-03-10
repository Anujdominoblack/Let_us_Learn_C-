#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
    set<int> s;  //set container is declared
    s.insert(10);
    s.insert(5);
    s.insert(20);
    auto it=s.lower_bound(9); //lower bound function is called
    if(it !=s.end())
    {
        cout<<(*it)<<endl;  //output 
    }
    else{
        cout<<"given element is gretaer then the largest"; //output
    }
    return 0;
}