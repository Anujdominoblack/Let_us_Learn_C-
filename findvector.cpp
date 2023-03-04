//we will use find() function to search for element in a container
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v{5,10,7,10,10,20};
    auto it = find(v.begin(),v.end(),10); //10 is the element we have to search
     //auto it is equal to vector<int> :: iterator it;
     if(it==v.end())
     {
        cout<<" not found"<<endl;  //as soon  as it find the valuee it return the iterator
     }
     else{
        cout<<"found at "<<(it-v.begin());
     }
     return 0;
}