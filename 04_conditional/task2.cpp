#include<iostream>
#include<string>
using namespace std;

int main(){

    int hours;
    cout<<"Enter the current hour (0 to 24):";
    // getline(cin, hours);
    // getline(cin, variable) is used for reading strings, not integers.
    cin>>hours;

    // if (hours1 >= 6){
    //     if(hours <= 20){
    //         cout<<"Currently shop is open";
    //     }
    // }else{
    //     cout<<"Shop is close";
    // }

if(hours >= 6 && hours <= 20){
    cout<<"Cuttently shop is open";
}else{
    cout<<"Shop is close";
}


    return 0;
}

// ### 2. **If-Else Statement**
// ### **Challenge:** Write a program that checks if a tea shop is open. If the current hour (input by the user) is between 8 AM and 6 PM, the shop is open; otherwise, it’s closed.
