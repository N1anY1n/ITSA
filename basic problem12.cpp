// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30761
// practice recursion
#include<iostream>
using namespace std;

int f( int n ){
    if(n == 0 || n == 1)   return n+1;
    else  return f(n-1)+f(n/2);
} // f()

int main(){
    int input;
    cin >> input;
    cout << f(input);
} // main()
