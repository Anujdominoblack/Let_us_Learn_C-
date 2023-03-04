// is used to check whether given two containers are permutation of each other are or not
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1={10,20,30,5};
    vector<int> v2={20,10,5,30};
    if(is_permutation(v1.begin(),v1.end(),v2.begin()))  //syntax is_permuation(1st  begin,1st  end,2nd begin)
    {
        cout<<"it is permuation";
    }
    else
    {
        cout<<"it is not permutation"<<endl;
    }
    return 0;
}