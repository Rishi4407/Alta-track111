#include<iostream>
using namespace std;
int main(){
    int Year;
    cout<<"Enter the Year:";
    cin>>Year;

    if(Year%4 ==0 ){
        cout<<"Leap Year";
    }
    else{
        cout<<"Not a Leap Year";
    }

    return 0;
}