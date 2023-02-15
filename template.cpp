#include<iostream>
using namespace std;
template<typename T>   //temlate function taking data type as argument 
T mymax(T x,T y)  //template function of return type t
{
    if(x>y)
    {
        return x;
    }
    else{
        return y;
    }
}
int main()
{
    cout<<mymax<int>(3,7)<<endl;  //function call with int parameter
    cout<<mymax<float>(10.0,3.21)<<endl; //function call with float parameter
    cout<<mymax<char>('a','b')<<endl;  //fucntion call with char parameter 
    return 0;
}