#include<iostream>
#include<string>
using namespace std;
//parent class
class parent{
    public:
        void showA(){
            cout<<"Your parent class is working"<<endl;
        }
};

//first child class
class son1 : public parent{
    public:
        void showB(){
             cout<<"your sont1 class is working now"<<endl;
        }
    
};
//second child class
class son2 : public son1{
    public:
        void showC(){
             cout<<"your sont1 class is working now"<<endl;
        }
};
//third child class
class son3 : public son2{
    public:
   
};

int main(){
    son3 a;
    a.showA();
    a.showB();
    a.showC();

};

