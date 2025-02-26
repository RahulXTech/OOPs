#include<iostream>
#include<string>
using namespace std;

int totalArray(int chai[], int size){
    int total = 0;
    for(int i = 0; i< size; i++){

        // total = total + chai[i];
        total += chai[i];
    }
}

int main(){

    int totalArray[4] = {3,5,3,5};

    int total1 = totalchaiServed(totalArray,4);
    cout<<"your array"<<total1;

    return 0;
}