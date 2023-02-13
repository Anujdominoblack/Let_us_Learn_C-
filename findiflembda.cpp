#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector <int> v{10,20,30,50,60,6};  //vector
    auto it=find_if(v.begin(),v.end(),[](int x){return x<10;});  //auto pointer and use of find if funtion
    cout<<*it;
    return 0;

}
