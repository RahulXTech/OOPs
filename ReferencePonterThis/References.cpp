#include<iostream>
#include<string>
using namespace std;

int main(){
//References
// A reference variale is a refernce to an existing variable and it is created with the & oprator.

string name = "Rahul_Kumar";
string &student = name;

cout<<name<<endl;
cout<<student<<endl;

//Get Memory address
string food = "Paneer_masala";
cout<<"your memory address is : "<<&food<<endl;

//Get values by memory address
cout<<"your values of memory address is : "<<*(&food)<<endl;

    return 0;

}