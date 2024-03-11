#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x1,x2,y1,y2,dist;
    cout<<"write x1,x2,y1,y2\n";
    cin>>x1>>x2>>y1>>y2;
    dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<"disance is"<<dist<<endl;
    return 0;
}