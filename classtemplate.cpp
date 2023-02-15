#include<iostream>
using namespace std;
template<class T>  //template class T
struct pai{
    T x,y;
    pai(T i,T j) //constructor 
    {
        x=i;
        y=j;
    }
    T getfirst()
    {
        return x;
    }
    T getsecond()
    {
        return y;
    }
};
int main()
{
    pai<int> p1(30,40);  //data type int as parameter 
    cout<<p1.getfirst()<<" "<<p1.getsecond();
    return 0;


}