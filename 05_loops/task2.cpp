#include<iostream>
#include<string>

using namespace std;

// ## 2. Do-While Loop
// Challenge:
// Create a program that asks the user if they want more tea. Keep asking them until they type "no" (case-insensitive), using a do-while loop.

int main(){
    string respnsse;

do{
    cout<<"Do you want to tea sir (yes/no):";
    cin>>respnsse;
}while(respnsse !="No" || respnsse != "no");

cout<<"Thank you sir visiting my cafe";
    return 0;
}