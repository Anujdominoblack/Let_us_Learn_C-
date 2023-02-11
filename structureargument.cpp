#include<iostream>
using namespace std;
 struct point{  //structure is created
    int x; //variable x is created 
    int y;  //varaible y is created 
 };
 void print(point p) //function for printing structure values
 {
    cout<<p.x<<endl<<p.y;  //output 
 }
 int main()
 {
    point p;  //strcutre varaiable is created
    p={.x=10,.y=20};  //designated initialisation
    print(p);  //function call
    return 0;
 }