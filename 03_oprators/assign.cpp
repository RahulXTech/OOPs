#include<iostream>
#include<string>
using namespace std;

int main(){

int tea_bags;

cout<<"Enter the number of tea bags: ";
cout>>tea_bags;

if(tea_bags =< 10){
   tea_bags = tea_bags + 5;
//    tea_bags +=5; 
}
cout<<"Your total bages are: "<<tea_bags;


    return 0;
}