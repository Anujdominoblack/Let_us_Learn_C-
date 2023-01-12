#include<iostream>
using namespace std;
int main()
{
    string str; //string declaration
    str="this is a c++ programme";   //string defination 
    int n=str.length();   //to find the length of the previous string 
    cout<<"the length of the string is "<<n<<endl;   //displaying the length of the string 
    str=str+"and it is a string ";  //string catenation 
    cout<<"length of new string "<<str.length()<<endl ;//length of new string 
    cout<<str<<endl;  //to print the new string 
    cout<<str.substr(2,4)<<endl;  //to create a new  sub string  starting from index 2 and of length 4
    cout<<str.find("c++");  //to find the c++ part in string 
    return 0;

}