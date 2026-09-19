#include<iostream>
using namespace std;
int main(){
    int totaldays;
    cout<<"Enter the number of days you lived:";
    cin>>totaldays;

    cout<<totaldays/365<<"Years ";
    cout<<totaldays%365/30<<"Months ";
    cout<<totaldays%365%30<<"Days "<<endl;
    
}