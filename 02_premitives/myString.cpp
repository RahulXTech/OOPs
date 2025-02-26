#include<iostream>
#include<string>

using namespace std;


int main(){


string ravoriteTea = "Lemon Tea";
cout<<ravoriteTea<<endl;

//Escap charecter===============================
// string intro = "My name is";
// cout<<intro;


// // User input in c++ ============================

// int Fnumber;
// int Snumber;

// getLine (cin , Fnumber)
// getLine (cin , Snumber)

// cout<<"your sum of number is "<< Fnumber + Snumber;


// Practics question ================================

int price;
cout<<"Enter the values of price: ";
cin>>price;
int netPrice = price + price*10/100;
cout<<netPrice;



    return 0;
}