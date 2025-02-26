#include<iostream>
#include<string>
#include<vector>

using namespace std;

class customer{
    public:
    string name;
    int number;
    int balance;

//Constructor overloading================
// where a class can have more than one constructor with different parameters.//if same name of constructor theat is clled costructor overloading.


//Defulat constructor. 
    customer(){
        name = "rahul";
        number = 484;
        balance = 498489;
    }
//Parameterize constructor with three parameater.
    customer(string n, int num, int bal){
        name = n;
        number = num;
        balance = bal;
    }
//Prameterize constructor with three parameater.
    customer(string name,int number){
        this->name = name;//It is an implicit pointer that points to the current instance (object) of the class.
        this->number = number;
        this->balance = 65;
    }
//Overloading constructor because same name diff parameater
    customer(int bals, int num){
        name = "unknown";
        balance = bals;
        number = num;
    }
//Inline constructor with one parameater.
    inline customer(string a) : name(a), balance(7878), number(343){

    }
//it's a copy constructor.
    Customer(customer &a){
        name = a.name;
        number = a.number;
        balance = a.balance;
    }

    void display(){
        cout<<name<<" "<<number<<" "<<balance<<endl;
    }

};

int main(){
    customer one;
    customer two("rohit", 43, 3343);
    customer three(423, 43);
    customer four("mohit", 432);
    customer five("narendraModi");
    //copy constructor
    //it's simply print because of defult copy constructor.
    customer seven(five);

    //similar work copy constructor to copy value with the help of variable.
    customer six;
    six = five;

    one.display();
    two.display();
    three.display();
    five.display();
    six.display();
    seven.display();
    return 0;
};