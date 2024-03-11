#include<iostream>
using namespace std;
enum day{mon,tue, wed=5,thu,fri,sat,sun};

typedef int marks;

int main()
{
    marks m1,m2;

    m1=50;
    m2=5;

    cout<<m1<<endl<<m2<<endl;
    
    cout<<mon<<endl;
    cout<<tue<<endl;
    cout<<wed<<endl;
    cout<<thu<<endl;
    cout<<fri<<endl;
    cout<<sat<<endl;
    cout<<sun<<endl;

}