#include<iostream>
using namespace std;
// using std; 
int main(){

/* Changeble data type means simple data type*/
    int price = 20;
    price = 40;
    cout<<"Current price is going on "<<price<<endl;

// not Changeble data type menas Const data types

    const int userId = 24242;
    // ===Error======
    // userId = 343433;
    cout<<"your id is "<<userId;
    
    return 0;
}