#include<iostream>
#include<string>
using namespace std;

int main(){

while(true){
    string response;
    cout<<"Do you want to tea:";
    getline(cin, response);


    if(response == "no" || response == "NO" || response == "No" || response == "nahi" || response == "NO" || response == "n" || response == "N"){
        break;
    }
}
cout<<"Thank you sir for visiting my caffe";

    return 0;
}