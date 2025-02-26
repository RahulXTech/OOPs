#include<iostream>
#include<string>
using namespace std;

int main(){

string teaTypes[4] = {"green tea", "lemon tea", "milk tea", "black tea"};
// cout<<teaTypes[2];
for(int i = 0; i < 4; i++){

    string respo;
    cout<<"your favorate "<< teaTypes[i] <<"Do you like? (yes/no) ";
    getline(cin, respo );

    if(respo == "no"){
    cout<<"Thank you sir for visiting my caffe";
        break;
    }
    
}
    return 0;
}