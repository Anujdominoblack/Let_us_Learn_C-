#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> ms;//multiset is declared 
    ms.insert(10);  //insert function is called
    ms.insert(20); 
    ms.insert(30);
    ms.insert(30);//multiset allows many instances 
    ms.erase(20); //erase function is called
    for(int x:ms)
    {
        cout<<x<<" ";  //output
    }
    return 0;
}