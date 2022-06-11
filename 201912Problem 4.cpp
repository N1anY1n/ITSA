//201912 problem 4
//input:
//2
//50
//955

#include<iostream>
using namespace std;
int main(){
    int money = 1000;
    int testnum, price;
    int coin;
    int fiveh = 0, oneh = 0, fifty = 0, ten = 0, fived = 0, oned = 0;
    cin >> testnum;
    while(testnum > 0){
        cin >> price;
        money = money - price;
        if( money >= 500 ) {
            fiveh = money/500;
            money = money - 500*fiveh;
        }
        if( money >= 100 ){
            oneh = money/100;
            money = money - 100*oneh;
        }
        if( money >= 50 ){
            fifty = money/50;
            money = money - 50*fifty;
            coin = fifty;
        }
        if( money >= 10 ){
            ten = money/10;
            money = money - 10*ten;
            coin = coin + ten;
        }
        if( money >= 5 ){
            fived = money/5;
            money = money - 5*fived;
            coin = coin + fived;
        }
        if( money >= 1 ){
            oned = money;
            coin = coin + oned;
        }

        cout << coin << endl; // # of coin
        cout << fiveh << " " << oneh << " " << fifty << " " << ten << " " << fived << " " << oned << endl;

        money = 1000;
        testnum -- ;
        fiveh = oneh = fifty = ten = fived = oned = coin = 0;
    } // while




}
