#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float r1,r2,a,b,c;
    cout<<"write a here:\n";
    cin>>a;
    cout<<"write b here:\n";
    cin>>b;
    cout<<"write c here:\n";
    cin>>c;
    r1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
    r2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
    cout<<"1st root is:"<<r1<<endl;
    cout<<"2nd root is:"<<r2<<endl;
    return 0;
}