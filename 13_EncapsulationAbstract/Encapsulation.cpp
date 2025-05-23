#include<iostream>
#include<string>
#include<vector>

using namespace std;

//Restrict the dat with the help of access spedifier that is called encapsulation.
class BankAccoutn{
    private:
        string accountNumber;
        double balance;
    public:
        BankAccoutn(string accNum, double bal){
            accountNumber = accNum;
            balance = bal;
        }
        //getter
        double getBalance() const{
            return balance;
        }
        //Method to withdraw money
        void withdraw(double amount){
            if(amount > 0 && amount<= balance){
                balance-= amount;
            }else{
                cout<<"invalid withdraw amount"<<endl;
            }
        }
        //Method to deposit money
        void deposit(double amount){
            if (amount > 0 ){
                balance += amount;
            }else{
                cout<<"Invalid deposit"<<endl;
            }
        }
};
int main(){
    BankAccoutn myacc("23143234534",0);
    myacc.deposit(1000000);
    myacc.withdraw(2000);
    cout<<"Your balanace"<< myacc.getBalance();
    return 0;
}