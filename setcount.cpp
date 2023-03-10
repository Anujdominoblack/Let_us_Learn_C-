#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;  //set is declared 
    s.insert(10); //insert function is called for inserting the elements 
    s.insert(20);
    s.insert(30);
    if(s.count(10))  //count function is called for counting the number of occurences
    {
        cout<<"element is present"<<endl;
    }
    else{
        cout<<"element is not present";
    }
    return 0;
}