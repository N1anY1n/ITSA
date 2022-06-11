//Standard weight calculation
//male: (height-80)*0.9
//female:(height-70)*0.6
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int height, gender;
    float weight;
    cin >> height >> gender; // gender = 0 => male ; gender = 1 => female
    if( gender == 1 ){
        weight = (height-80)*0.7;
    }
    else if( gender == 2 ){
        weight =(height-70)*0.6;
    }
    cout << fixed << setprecision(1)<<weight;
}
