#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
int main()
{    // we are doing for find function
    list<int> l={5,10,12,8,7,3};
    auto it=find(l.begin(),l.end(),10);
    if(it==l.end())
    {
        cout<<"not found"<<endl;
    }
    else{
        cout<<"found"<<endl;
    }
}