#include<iostream>
#include<string>
using namespace std;

// =============please check the values of &one parameater in function ===========
void newNum (int &one){
    int tnum = one + 3;
    cout<<"your total values of number: "<<tnum<<endl;

}
int main(){
int num = 5;
newNum(num);
newNum(4);
cout<<"your total values : "<<num;
    return 0;
}