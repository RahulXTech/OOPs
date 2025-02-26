#include<iostream>
#include<string>
#include<vector>

using namespace std; //built-in functions, classes, and objects of the C++ Standard Library.

class simpleIntrest{
    private:
        int principalAmount;
        int intrestRate;
        int time;
    public:
        simpleIntrest(int P, int I, int T){
            principalAmount = P;
            intrestRate = I;
            time = T;
        };
        int printValues(){
            return principalAmount*intrestRate*time;
        };
};

int main(){
    //parameterize constructor.
    simpleIntrest simple(2000, 23, 5);
    cout<<"your total amoutn is : "<<simple.printValues();
    
    //compied constructor.
    
    return 0;
};
