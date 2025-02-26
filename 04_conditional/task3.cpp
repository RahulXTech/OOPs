#include<iostream>
#include<string>
using namespace std;

int main(){

int totalCups;
cout<<"Enter the number of cups:";
cin>>totalCups;

if(totalCups > 20){
    cout<<"Congratulation you get the 20\% discount";
    if(totalCups >= 10 && totalCups <= 20){
        cout<<"Congratulation you get the 10\% discount";
    }
}else{
    cout<<"No discount";
}


    return 0;
}

// ### 3. **Nested If-Else**
// ### **Challenge:** A tea shop offers discounts based on the number of tea cups ordered. Write a program that checks the number of cups ordered and applies a discount:* More than 20 cups: 20% discount
// * Between 10 and 20 cups: 10% discount
// * Less than 10 cups: No discount
