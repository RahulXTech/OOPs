#include<iostream>
#include<string>
using namespace std;
int main(){

int cups;
cout<<"Enter the total cups number: ";
cin>>cups;

if(cups >= 20){
cout<<"Congratulation you get the *Gold* and " <<cups<<"Cups";

}else if(cups >=10 && cups <= 20){
    cout<<"Congratulation you get the *Silver* and"<<cups<<"Cups";
}else{
    cout<<"You get the only number of cups: "<<cups;
}

    return 0;
}