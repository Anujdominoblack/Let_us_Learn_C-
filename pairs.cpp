#include<utility>
#include<iostream>
using namespace std;
int main()
{
    pair <int,int> p1(10,12); //pair is created
    pair <int,string> p2(10,"name");  //pair is created with one int and one string 
    cout<<p1.first<<" "<<p1.second<<endl;  //output first and second is used to access the elements
    cout<<p2.first<<" "<<p2.second<<endl;  //output first and second is used to access the elements

    return 0;
    



}