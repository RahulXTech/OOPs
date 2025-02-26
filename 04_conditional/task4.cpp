#include<iostream>
#include<string>
using namespace std;

int main(){

int teaName;
cout<<"Please select the tea in the list"<<"\n";
cout<<"1 Green tea of price $2"<<"\n";
cout<<"2 black tea of price $3"<<"\n";
cout<<"3 oolong tea of price $4"<<"\n";
cout<<"Enter number according to tea: ";
// getline(cin, teaName);
cin>>teaName;


switch(teaName){
    case 1:
        cout<<"your selected green tea price $2"<<endl;
        break;
    case 2:
        cout<<"your selected black tea price $3"<<endl;
        break;
    case 3:
        cout<<"your selected oolong3 tea price $4"<<endl;
        break;
    default:
        cout<<"sorry it's not available"<<endl;
        break;
}
    return 0;
}

// ### 4. **Switch Case**
// ### **Challenge:** Write a program that lets the user select a tea type from a menu. Use a switch statement to display the price based on the selected tea:* Green Tea: $2
// * Black Tea: $3
// * Oolong Tea: $4