// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30756
#include<iostream>
using namespace std;

int main(){

    char t; // used to skip ','
    int smoney, emoney;
    int apple, orange, peach;
    int n1=0, n2=0, n3=0; // # of coins
    cin >> smoney >> t;
    cin >> apple >> t >> orange >> t >> peach ; // # of each fruit
    emoney = smoney - (apple*15) -(orange*20) - (peach*30);
    if( emoney < 0 ) cout <<"0\n"; // money is not enough
    else {
        if( emoney >= 50 ) {
            n1 = emoney/50;
            emoney = emoney - 50*n1;
        }
        if( emoney >= 5 ){
            n2 = emoney/5;
            emoney = emoney - 5*n2;
        }
        if( emoney >= 0 ){
            n3 = emoney;
        }
        cout << n3 <<","<< n2<<","<< n1;

    }









}
