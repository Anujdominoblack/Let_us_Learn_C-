#include<iostream>
using namespace std;
struct point{ //structure defination
    int x;   //int type varaible
    int y;  //int type varaible

};
int main()
{
    point p;  //structure alias is created
    p.x=10;  //accessing element x from structure
    p.y=15;  //accessing element y from structure 
    cout<<p.x<<" "<<p.y;  //printing the result
    return 0;
}