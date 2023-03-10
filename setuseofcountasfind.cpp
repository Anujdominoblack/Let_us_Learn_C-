#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    int x=s.count(20);  //as duplicates elements are not allowed in set so count either is 1 or 0
    if(x==1)
    {
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}