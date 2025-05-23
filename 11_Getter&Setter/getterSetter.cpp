#include<iostream>
#include<vector>
#include<string>

using namespace std;
//Benifits of getter and setter -> You can easly apply the any condition on the getting data.

class person{
    private:
        string name;
        int age;
    public:
        //setter methods - A function that sets the value of a private variable.
        void setName(string newName ){
            name = newName;
        }

        void setAge (int newAge){
            age = newAge;
        }

        //getter method - A function theat returns the value of a private variable.
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
};

int main(){
    person pers;
//setting values using setter
    pers.setName("Rahul");
    pers.setAge(20);

//getting values using getter

    cout<<"Your name is : "<<pers.getName()<<endl;
    cout<<"Your age is : "<<pers.getAge()<<endl;

    string a = pers.getName();
    int b = pers.getAge();

    cout<<"Your name is : "<<a<<endl;
    cout<<"Your age is : "<<b<<endl;







    return 0;
}