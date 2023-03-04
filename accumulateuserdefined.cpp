#include<numeric>
#include<iostream>
using namespace std;
int myfun(int x,int y)
{
    return x*y;
}
int main()
{ int res=1;
int arr[]={10,20,30};
cout<<accumulate(arr,arr+3,res,myfun); //myfun is called for our desried output
return 0;

}