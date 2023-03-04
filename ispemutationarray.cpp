#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr1[]={10,20,5,30};
    int arr2[]={20,30,5,10};
    if(is_permutation(arr1,arr1+4,arr2))
    {
        cout<<"is permuattion"<<endl;
    }
    else{
        cout<<" is not permutation"<<endl;
    }
    return 0;
}