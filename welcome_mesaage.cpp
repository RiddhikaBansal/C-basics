#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"hello\n";
    cout<<"may i know your name\n";
    //cin>>name;//it will read only first word
    //that' why use getline
    getline(cin,name);
    cout<<"welcome "<<name<<endl;
    return 0;
    
}