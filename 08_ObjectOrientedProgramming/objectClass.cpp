#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Chai{
    public:
        //data member (attributes)
        string teaName; 
        int servings;
        vector<string> Ingredients; //vector it's work like array to store the element/data in a linear arrangement.

        // Member function.

        void displayChaiDetails(){
            cout<<"Team Name: " <<teaName<<endl;
            cout<<"serving: " <<servings<<endl;
            cout<<"Ingredients: ";

            for(string ingr : Ingredients){
                cout<<ingr<<" ";
            }
            cout<<endl;
        }
};

//================== Data member/attribute========================
// when we create or define the data member in class that is called know as damamember / attribute

//===============Member function ====================
// when we create a funciton in class that is called member function
int main(){

    Chai chaiOne; //class access and decleare the object 
        chaiOne.teaName = "Lemon tea";
        chaiOne.servings = 2;
        chaiOne.Ingredients = {"water", "lemon", "milk","suger"};
        chaiOne.displayChaiDetails();

    Chai chaiTwo; // access the class and decleare the second object
        chaiTwo.teaName = "Masal tea";
        chaiTwo.displayChaiDetails();


    return 0;
}