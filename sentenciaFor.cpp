#include<iostream>
using namespace std;

int main(){
    int i, edad;
    cout<<"Ingrese 3 edades: "<<endl;
    for(i = 1; i <= 3; i++){
        cin>>edad;
        cout<<"Edad: "<<i<<" = "<<edad<<endl;
    }
    return 0;
}