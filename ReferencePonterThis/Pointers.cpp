#include<iostream>
#include<string>
using namespace std;

int main(){
//Pointers
// A special variables that strore address of other variables.

string teacher = "rahul";
string* master = &teacher;
string** guruji = &master;

cout<<teacher<<endl;
cout<<master<<endl;
cout<<guruji<<endl;

    return 0;
}