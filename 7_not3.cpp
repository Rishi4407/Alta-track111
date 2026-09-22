//Print the digit 1 to n not including multiple of three:
#include <iostream>
using namespace std;
int main(){
   int x;
   cout<<"Enter your number:";
   cin>>x;
   
   int cnt=1;
   while(cnt<=x){
    if (cnt%3 ==0){
        cnt++; 
    }
    cout<<cnt<<endl;
    cnt++;
   }
}