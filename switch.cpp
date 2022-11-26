#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    switch (a)
    {
      case 1:
      cout<<"it is one";
      break;
      case 2:
      cout<<"it is two";
      break;
      case 3:
      cout<<"it is three";
      break;
      case 4:
      cout<<"it is four";
      break;
      default:
      cout<<"it is greater than 4";
    }
    return 0;
}