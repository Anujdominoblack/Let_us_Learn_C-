#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set <int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    int res=s.count(30);
    cout<<res<<endl;
    if(s.count(40))
    {
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;

}