//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30757
// Always divide the larger number by the smaller number
// when one of them is 0 => the other is greatest common factor
#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cin >> num1 >> num;
    while( num1 > 0 && num2 > 0 ) {
        if( num1 >= num2 ) num1= num1 % num2;
        else num2 = num2 % num1;
    }

    if( num1 == 0 ) cout << num2;
    else cout << num1;
} // main
