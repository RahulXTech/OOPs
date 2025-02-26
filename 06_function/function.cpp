#include<iostream>
#include<string>
using namespace std;
// using namespace standard==========

// ===========function in c++ =====================
// function is a reusable block of code.
// returnType functionName(parameters){
//     // function body
// }
int checkTemp(int temp){
    return temp;
}

//========================Declearation of function in c++============
void serveChai(int cups);
void serveChai(string cups);
void sumOfNumber(int fn, int fn2);

// ===Function overloading=======================
// same function diffrent parameater that is called function over loading.
// when i declear same name two function than calling with the help of parameater that is called function overloading.



//--------------It's a main function of the code-----------------------
int main(){

int temprature = checkTemp(25);

cout<<"Your room temprature is: "<<temprature<<endl;
serveChai(5); //calling the function in c++


sumOfNumber(3,4);

    return 0;
}


//=============Defination of function =============

void serveChai (int cups){
    cout<<"your "<<cups<<" cups of chai";
}


void sumOfNumber(int fn, int fn2){
    cout<<"your total number of sum";
    return ;

}
