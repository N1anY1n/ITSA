//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30748
//input:
//10 23
//15 20
#include <iostream>
using namespace std;

int main(){
    int shour,smin; // start
    int ehour,emin; // end
    int temp;
    cin >> shour >> smin;
    cin >> ehour >> emin;
    smin = shour*60 + smin; // turn into minutes
    emin = ehour*60 + emin; // turn into minutes
    temp = emin-smin; // end - start (min)
    if( temp <= 120 ){ // within 2 hours => 30 per half hour
        temp = temp/30;
        cout << temp*30;
    }
    else if( temp >=120 && temp <=240){ // 2 hours ~ 4 hours
        temp =(temp-120)/30;
        cout << 120+temp*40; // 120 : first 2 hours
    }
    else { // over 4 hours
        temp = (temp-240) / 30;
        cout << 280+temp*60; // 280 = 30 * 4 + 40 * 4
    }

}
