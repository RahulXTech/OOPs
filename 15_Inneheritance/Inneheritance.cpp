#include<iostream>
#include<string>

using namespace std;
//when the dhild clas inherits the properties of parent clsss that is called inheritance.

//base class
class Tea{
    protected:
        string teaName;
        int servings;
    public:
        Tea(string name, int ser): teaName(name), servings(ser){
            cout<<"Tea constructor called"<<teaName<<endl;
        }
//it is a abstract class because of virtual class cretated in class.
        virtual void makingTea() const{
            cout<<"Ming start"<<teaName<<endl;

        }
        virtual void servingTea() const{
            cout<<"serving has started withe "<<servings<<"cups"<<endl;
        }

        virtual ~Tea(){
            cout<<"Tea destructo called for"<<teaName<<endl;
        }
};

class GreenTea: public Tea{
    public:
    GreenTea(int serve):Tea("Green tea", serve){
        cout<<"Green tea constructor called"<<endl;

    }

    void makingTea() const override{
        cout<<"making "<<teaName<<"step by step"<<endl;
    }

    ~GreenTea(){
        cout<<"greentea constructor called"<<endl;

    }
};

class masalaTea:public Tea{
    public:
        masalaTea(int serve) Tea("masala tea ", serve){
            cout<<"masalaTea constructor called"<<endl;
        }
}

int main(){
    

    return 0;
}