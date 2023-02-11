#include<iostream>
using namespace std;
struct point{  //structure is created
    int x;  //int type varaible is created
    string name;   //string varaible is created 
    string address;  //string varaible for address is created 
      int age;  //int varaible for age 

};
void print(point &p)  //for printing the function is created 
{
    cout<<p.x<<endl;  //output
    cout<<p.name<<endl;  //output
    cout<<p.address<<endl;  //output 
    cout<<p.age<<endl;  //output
}
int main()
{
    point p;  //struct variable is created 
    p.x=10;   //p.x value is assigned
    p.name="ram";  //p.name value is assigned 
    p.address="mumbai";  //address value is assigned
    p.age=30;  //age value is assigned 
    print(p);  //function call
    return 0;
}