#include<iostream>
using namespace std;  
struct p{   //structre is created
    int x;  //a variable of int is created
    int y;  //another varaible of int is created
};
int main()
{
    struct p q;  // alias is created 
    q={.x=10,.y=20};  //values are assigned 
    cout<<q.x<<endl<<q.y;  //output
    return 0;


}