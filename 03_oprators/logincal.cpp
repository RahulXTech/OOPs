#include<iostream>
#include<string>

using namespace std;

int main(){

bool isStudent;
int tCup;
cout<<"Are you student (1 for YES and 0 for NO):";
cin>>isStudent;
cout<<"How many have your purched cups : ";
cin>>tCup;

if (isStudent == 1 || tCup >= 15){
    cout<<"Congratulaton you are eligible for the discount";
}else{
    cout<<"You are not eligible for the discount";
};

return 0;
}