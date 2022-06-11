// judge the season
#include<iostream>
using namespace std;

int main(){
    while(1){
        int month;
        cin >> month;
        if( month <= 5 && month >= 3 ) cout << "Spring\n";
        else if( month <= 8 && month >= 6 ) cout << "Summer\n";
        else if( month <= 11 && month >= 9 ) cout << "Autumn\n";
        else if( month <= 2 && month >= 1 || month == 12 ) cout << "Winnter\n";
    }
}
