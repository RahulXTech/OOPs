//What is constructor?
// Constructors in C++ are special member functions that are automatically called when an object of a class or struct is created. They are used to initialize the object's data members. Constructors have the same name as the class or struct and do not have a return type
//It is a special on that is invoked automatically at the time of object creation.
//Name of the constructor should be same as class name.
//It doesn't have any return type.
//It is used to initialize the value.
//trying to making defult constructor in c++.
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class tempChai{
    public:
    string teaName;
    int cups;
    vector<string> gridiants;

//it's create on the basese of class name
//Defult constructor.
    tempChai(){
        cout<<"constructor called"<<endl;
        teaName = "Unknow";
        cups = 1;
        gridiants = {"wate", "tea_leavs","milk"};
    }
    void chaiPrint(){
        cout<<"Your favorate "<<teaName<<endl;
        cout<<"Total "<<cups<<"cup"<<endl;
        cout<<"Total gridients : ";
        for(string gri : gridiants){
            cout<<gri <<", ";
        }
        cout<<endl<<"it's total process"<<endl;
    }
};
int main(){

//when you create the object than constructure created at a time.

tempChai chai;

chai.teaName = "Black tea";
chai.cups = 4;
chai.gridiants = {"water", "suger", "milk", "tea", "masala", "tea_leves"};
chai.chaiPrint();



tempChai chaiSecond;
chaiSecond.chaiPrint();
return 0;

};