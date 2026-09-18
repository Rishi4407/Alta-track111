#include <iostream>
using namespace std;
int main(){
    float price;
    
    cout<<"Enter the price of an item:"<<endl;
    cin>>price;
    cout<<"We are giving you 10% Discount"<<endl;
    
    price= price-price*0.10;
    cout<<"The price of an item after Discount:"<<price<<endl;

    price=price+price*0.05;
    cout<<"The final price of item after adding the tax will be:"<<price<<endl;

}