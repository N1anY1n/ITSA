//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30780
//Twelve Constellations(star sign)
#include<iostream>
using namespace std;
void judge( int month, int day){

    if(( month == 1 && day >= 21 ) || ( month == 2 && day <=18 ) )
        cout << "aquarius\n";
    else if(( month == 2 && day >= 19 ) || ( month == 3 && day <= 20 ) )
        cout << "Pisces\n";
    else if(( month == 3 && day >= 21 ) || ( month == 4 && day <= 20 ) )
        cout << "Aries\n";
    else if(( month == 4 && day >= 21 ) || ( month == 5 && day <= 21 ) )
        cout << "Taurus\n";
    else if(( month == 5 && day >= 22 ) || ( month == 6 && day <= 21 ) )
        cout << "Gemini\n";
    else if(( month == 6 && day >= 22 ) || ( month == 7 && day <= 22 ) )
        cout << "Cancer\n";
    else if(( month == 7 && day >= 23 ) || ( month == 8 && day <= 23 ) )
        cout << "Leo\n";
    else if(( month == 8 && day >= 24 ) || ( month == 9 && day <= 23 ) )
        cout << "Virgo\n";
    else if(( month == 9 && day >= 24 ) || ( month == 10 && day <= 23 ) )
        cout << "Libra\n";
    else if(( month == 10 && day >= 24 ) || ( month == 11 && day <= 22 ) )
        cout << "Scorpio\n";
    else if(( month == 11 && day >= 23 ) || ( month == 12 && day <= 21 ) )
        cout << "Sagittarius\n";
    else if(( month == 12 && day >= 22 ) || ( month == 1 && day <= 20 ) )
        cout << "Capricorn\n";


}
int main(){
    int month, day;
    cin >> month >> day;
    judge( month, day);


}
