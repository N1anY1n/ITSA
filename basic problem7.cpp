//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30755
#include<iostream>
using namespace std;

int main(){
    int row = 0, i = 0;
    char oper;//operant
    int num1 = 0,num2 = 0 ,num3 = 0 ,num4 = 0;
    int a[10] = {0}, b[10] = {0};
    cin >> row;
    while( row > 0 ){
        cin >> oper;
        cin >> num1>>num2>>num3>>num4;
        if( oper == '+'){
            a[i] = num1+num3;
            b[i] = num2+num4;
        } // if
        else if( oper == '-'){
            a[i] = num1-num3;
            b[i] = num2-num4;
        } // else if
        else if( oper == '*'){
            a[i] = (num1*num3) - (num2*num4);
            b[i] = (num2*num3) + (num1*num4);
        } // else if
        else if( oper == '/'){
            a[i] = ((num1*num3)+(num2*num4))/ (num3^2+ num4^2) ;
            b[i] = ((num2*num3)-(num1*num4))/ (num3^2+ num4^2) ;
        } // else if

        row--;
        i++;
    }

    for( int j = 0 ; j < i; j++ )
        cout << a[j] <<" "<< b[j] << endl;



}
