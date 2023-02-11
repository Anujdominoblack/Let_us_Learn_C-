#include<iostream>
using namespace std;
union test{
   int x;  //varaible x is created 
   int y;  //varaible y is created
};
int main()
{
    test t;  //unino variable t is created 
    cout<<"enter the value of x and y"<<endl;
    cin>>t.x>>t.y;  //entering the values 
    cout<<"the values are "<<t.x<<" "<<t.y;  //output
    cout<<"sizeof union is "<<sizeof(t);
}