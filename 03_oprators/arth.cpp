#include<iostream>
#include<string>
using namespace std;

int main(){

    int cups;
    double pricePerCup, totalPrice, discountedPrice;

    cout<<"Enter the number of tea cups: ";
    cin>>cups;
    cout<<"Enter the price of per cup: ";
    cin>>pricePerCup;
    totalPrice = pricePerCup * cups;
    //apply 5% discount if prce greater than / avove 100 rupees

    discountedPrice = totalPrice - totalPrice*5/100;
if(totalPrice > 100){
    cout<<"yor are eligible to get 5 percent discount"<<endl;

}endl{
    cout<<"yor are not eligible to get 5 percent discount"<<endl;


};
    
    cout<<"Yout total price of tea "<<totalPrice<<endl;
    cout<<"Your get the 5 percet discoun on total price of tea: "<<discountedPrice<<endl;
    


    return 0;
}