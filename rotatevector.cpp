#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={10,20,30,40,50,60};
    // rotate funcyion rotate the container around a point
    // syntax is rotate(start,point,end)
    rotate(v.begin(),v.begin()+2,v.end()); //rotate function called
    for(int x:v)
    {
        cout<<x<<endl;  //output
    }
    return 0;
}