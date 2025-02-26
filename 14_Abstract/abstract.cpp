#include<iostream>
#include<string>
using namespace std;

//Abstraction============================
// In abstraction we can hide unnecessoray details and show the neccesory details.

// when we decleare virtual function in class after that we need  we need to define another class for the use of abstraction class
// A class which has atleast one pure virtual function


class Tea{
    public:
        virtual void prepareIngredients() = 0;
        virtual void survingTea() = 0;
        virtual void transectionCalculation() = 0;

            void makeTea(){
                prepareIngredients();
                survingTea();
                transectionCalculation();
            }
};

class greenTea : public Tea{
    public:
        void prepareIngredients() override{
            cout<<"your gredients ready for tea"<<endl;
        }
        void survingTea() override{
            cout<<"You can dring your tea is ready for dringking"<<endl;
        }
        void transectionCalculation() override{
            cout<<"Your payment transection is compted"<<endl;
        }
};

class masalaTea : public Tea{
    public:
        void prepareIngredients() override{
            cout<<"your gredients ready for tea"<<endl;
        }
        void survingTea() override{
            cout<<"You can dring your tea is ready for dringking"<<endl;
        }
        void transectionCalculation() override{
            cout<<"Your payment transection is compted"<<endl;
        }
};

int main(){
    greenTea a;
    a.makeTea();
    return 0;
}