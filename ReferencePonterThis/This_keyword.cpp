#include<iostream>
#include<string>
using namespace std;

int main(){
//This keyword.
// the this keyword is a special pointer available inside non-static member functions of a class. It refers to the current object (i.e., the object that invoked the function).

class employee{
    public:
    string name;
    int id;
    float salery;

    employee(string name, int id, float income){
       this-> name = name;
       this-> id = id;
       salery = income;
    }
    void Display(){
        cout<<id<<" "<<name<<endl;
    }
    void PringSalery(){
        cout<<salery<<endl;
    }

};

employee emp("rahul",21,43000);
cout<<emp.name<<endl;

//Display values by the function.
emp.PringSalery();
emp.Display();

    return 0;
}