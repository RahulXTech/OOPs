#include<iostream>
#include<string>
#include<vector>

using name std;
//----------------Friend class-------------------------------------------
//It's give the special permissoin to access the private and protected members of another class.
//Normally private members can't be accessd outside the class.
//A friend class can acess private member of another class.
//Declaring a class a friend does not mean it inherits from the original class.

class student{
    private:
        string name;
        int enrollmentId;
    public:
        
        student(string name1, int enrollmentId1) : name(name), enrollmentId(enrollmentId1){};
       
        friend void student(student stds);
       

};
        void display(student stds){
            cout<<"Student : "<<stds.name<<endl;
            cout<<"EnrollmentID : "<<stds.enrollmentId<<endl;

        }


int main(){

    student stds("Rahul", 6525);
    stds.display();


    return 0;
};