#include <iostream>
using namespace std;
int main(){
    int a,b;
    char ch;

    cout<<"Enter first number:"<<endl;
    cin>>a;
    cout<<"Enter Second number:"<<endl;
    cin>>b;
    cout<<"operator:";
    cin>>ch;
    

    switch(ch)
    {
        case '+':
        cout<<a<<"+"<<b<<"="<<a+b<<endl;
        break;

        case '-':
        cout<<a<<"-"<<b<<"="<<a-b<<endl;
        break;

        case '*':
        cout<<a<<"*"<<b<<"="<<a*b<<endl;
        break;

        case '/':
        cout<<a<<"/"<<b<<"="<<a/b<<endl;
        break;

    }
}
    