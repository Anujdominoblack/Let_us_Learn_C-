#include<iostream>
using namespace std;
struct point{  //structure is created 
    int x;  //int variable is cretaed 
    int y; //int variable is created
};
int main()
{
    point arr[5]; //structure array is created 
    for(int i=0;i<5;i++)   //loop for entering values 
    {
        cin>>arr[i].x;
        cin>>arr[i].y;
    }
    for(int i=0;i<5;i++)  //loop for output
    {
        cout<<arr[i].x<<endl<<arr[i].y<<endl;
    }
    return 0;
}