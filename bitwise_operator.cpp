#include<iostream>
using namespace std;
int main()
{
    int a=11,b=7,c;
    c=a&b;
    cout<<c<<endl;

    int f;
    f=a|b;
    cout<<f<<endl;

    int g;
    g=a^b;//xor
    cout<<f<<endl;

    char h;
    h=a<<b;
    cout<<int(h)<<endl;

    char i;
    i=b<<a;
    cout<<int(i)<<endl;

    char k;
    k=~a;
    cout<<int(k)<<endl;
    
    return 0;

}