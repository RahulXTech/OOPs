#include<iostream>
#include<string>

using namespace std;
//Protected data only child class can access.
class A{
    protected:
        int num1 = 20;
        int num2 = 30;
    public:
        void SumOfTwoNum(){
            cout<<"Sum of two number is : "<<num1+num2<<endl;
        }         
};
class AB : public A{
    public:
        int data(){
            cout<<"Your parent data is : "<<num1<<endl;
        }
};

int main(){
    AB A12;
    A12.data();
}


