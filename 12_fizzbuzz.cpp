#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    for(int i=1; i<=n; i++){
        if(i%3==0&& i%5==0){
            cout<<"fizzbuzz"<<endl;
        }
        else if(i%5==0){
            cout<<"buzz"<<endl;
        } 
        else if(i%3==0){
            cout<<"Fizz"<<endl;
        }
        else {
            cout<<i<<endl;
        }
    }
}