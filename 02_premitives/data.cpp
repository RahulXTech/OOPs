#include<iostream>
using namespace std;

int main(){

// the microsoft c++ 32-bit and 64-bit compilers recognize the types in the table
// -    int(unsigned int)
// -     __int8 (unsigned __int8)
// -     __int16 (unsigned __int16)
// -     __int32 (unsigned __int32)
// -     __int64 (unsigned __int64)
// -     short (unsigned short)
// -     long (unsigned long)
// -     long long (unsigned long long)


    int teaLeaves = 50;
    float waterTemperature = 85.5;
    double priceOfTea = 299.99;
    char teaGrade = 'A';
    bool isTeaReady = true;

    long long lagerNum = 2000000000000000000000;
    __int64 lageBit = 3434;

    cout<<lagerNum<<endl;
    cout<<lageBit<<endl;

    cout<<teaLeaves<<endl;
    cout<<waterTemperature<<endl;
    cout<<priceOfTea<<endl;
    cout<<teaGrade<<endl;
    cout<<isTeaReady<<endl;

    return 0;
}