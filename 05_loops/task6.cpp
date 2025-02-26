#include<iostream>
#include<string>

using namespace std;

int main(){
string typesOfTea[5] = {"lamon tea", "black tea", "green tea","simple tea", "orage tea"};
for(int i = 0; i < 5; i++){
    cout<<"Tea of VIP Table";
        for(int j = 0; j < 4; j++){
            cout<<j<<" cup "<<typesOfTea[i]<<endl;
        }
}
   return 0;
}