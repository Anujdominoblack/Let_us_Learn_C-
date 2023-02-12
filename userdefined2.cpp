#include<iostream>
#include<exception>  //exception class included
using namespace std;
class myexception:public exception  //user defined exception class
{
    virtual const char* what() const throw()
    {
      return "exception occured";
    }
};
int main()
{
  try{  //try block
    throw myexception();
     }
     catch(exception e) //catch block
     {
        cout<<e.what()<<endl;
     }
     return 0;
}
