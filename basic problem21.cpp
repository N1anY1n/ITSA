// find max and min
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float max, min, temp;
    cin >> max >> min; // set the first input is max second is min
    if( max < min ) { // swap
        temp = min;
        min = max;
        max = temp;
    } // if
    for( int i = 0; i < 8 ; i++){
        cin >> temp;
        if( temp < min ) min = temp;
        if( temp > max )  max = temp;
    }

    cout << fixed << setprecision(2)<< "maximum:"<<max<<endl;
    cout << fixed << setprecision(2)<< "minimum:"<<min<<endl;

}
