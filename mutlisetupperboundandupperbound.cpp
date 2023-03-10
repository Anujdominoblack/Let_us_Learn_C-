#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> ms;
    ms.insert(10);
    ms.insert(20);
    ms.insert(30);
    ms.insert(40);
    ms.insert(50);
    auto p=ms.lower_bound(15); //lowerbound function called 
    auto q=ms.upper_bound(20);  //upperbound function called
    cout<<(*p)<<" "<<(*q)<<endl;
    return 0;
}