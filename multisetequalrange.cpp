#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> ms;  //multiset is declared 
    ms.insert(10);  //insert function is called
    ms.insert(20);
    ms.insert(10);
    ms.insert(40);
    auto it=ms.equal_range(20); //equal range helps in both the upper and lower bound
    cout<<*it.first<<" "<<*it.second<<endl;  //output
    return 0;
}