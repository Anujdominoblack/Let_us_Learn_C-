//random number generator using time seed 
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(NULL)); //time seed for generating random numbers
    for(int i=0;i<5;i++)
    {
        cout<<rand()<<endl;  //output
    }
    return 0;
}