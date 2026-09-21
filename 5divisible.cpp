#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    
    if(n%3 ==0 && n%5 ==0){
        cout<<"It is divisible by both 3 and 5";
    }
    else if(n%3 ==0){
        cout<<"It is Divisible only by 3 ";
    }
    else if(n%5 ==0){
        cout<<"It is Divisible only by 5";
    }
    else {
        cout<<" It is not divisible by 3 and 5";
    }
    return 0;
}