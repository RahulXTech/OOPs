//Destructor==========
//It's an instance member function that is invoked automatically whenever an object is going to be destroyed.
//It is a last function that is goint to be called before an object is destroyed.
//It's means basicaly realease the dinemecaly space/storage in memory after the run code in stack. or any open file in computer.

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class customer{
    private:
        string* name;
    public:
//Constructor creatin
        customer(string studentName){
                name = new string(studentName);
            cout<<"constructor :"<<*name<<endl;
        }
// Destructor creatoin
        ~customer(){
            cout<<"destructor :"<<*name<<endl;
            delete name; //free alocate memory
        }
};

int main(){
    customer cus("rahul1");
    return 0;
};