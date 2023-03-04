#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct point{  //user defined data type 
    int x,y;
    point(int i,int j)
    {
        x=i;
        y=j;
    }
};
 bool mycmp(point  p1,point  p2)  // function for comparing 
{ 
  return p1.x<p2.x;

}
int main()
{
    vector<point> v={{10,20},{11,19},{30,35}};
    auto it=max_element(v.begin(),v.end(),mycmp);
    cout<<(*it).x<<" "<<(*it).y<<endl;
    auto it1=min_element(v.begin(),v.end(),mycmp);
    cout<<(*it1).x<<" "<<(*it1).y<<endl;
    return 0;
}