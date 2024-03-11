#include<iostream>
using namespace std;
int main()
{
    float SI,P,T,R;
    cout<<"type p, t, r here:\n";
    cin>>P>>T>>R;
    SI=P*T*R/100.0;
    cout<<"SI is:"<<SI<<endl;
}