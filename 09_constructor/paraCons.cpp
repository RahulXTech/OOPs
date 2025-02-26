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
//parameterise constructor.
    tempChai(string name, int valus, vector<string> ingr){
        cout<<"constructor called"<<endl;
        teaName = name;
        cups = valus;
        gridiants = ingr;
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
tempChai simplechai("black_tea", 3, {"water", "tea", "tea_leavs"});
simplechai.chaiPrint();



//when you create the object than constructure created at a time.


return 0;
};