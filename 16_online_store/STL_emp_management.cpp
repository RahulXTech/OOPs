#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<iterator>
#include<string>

using namespace std;

struct Employee{
    int id;
    string name;
    double salary;
};

void displayEmployee(const Employee& emp){
    cout<< "ID: "<<emp.id <<" , Name: "<<emp.name <<" , Salary: "<<emp.salary<<endl;
}


int main(){
    vector<Employee> employees = {
        {101, "Rahul", 100000},
        {102, "Mohit", 40000},
        {103, "Anita", 50000},
        {104, "Sumit", 20000},
        {105, "Sonu", 60000},
    };

    sort(employees.begin(), employees.end(),[](const Employee& e1, const Employee& e2){
        return e1.salary > e2.salary;
    });


    cout<<"Employees sorted by salary -> "

    return 0;
};