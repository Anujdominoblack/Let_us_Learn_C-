#include<iostream>
using namespace std;
struct student{  //structure student is cretaed 
    int roll ;  //variable of type int is created 
    string name;  //variable of type string is created 
    string address;  //another variable of type string is created
};
int main()
{
    student s;
    s={101,"ram","delhi"};  //assigning values to s
    cout<<s.name<<endl<<s.roll<<endl<<s.address;   //output
    return 0;
}
