#include<iostream>
using namespace std;
int main()
{
    int i=5,j,z,a,b;
    z=i++;
    j=++i;

    b=2*++i +2*i++;

    a=2*i++ +2*i++;

    cout<<i<<j<<z<<a<<b<<endl;
    return 0;
}