#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> ms;  //multiset is declared
    ms.insert(10);
    ms.insert(20);
    ms.insert(30);
    ms.insert(40);
    ms.insert(30);
    cout<<ms.count(30)<<endl;  //count function is called
    return 0;

}