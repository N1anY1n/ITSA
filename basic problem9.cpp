//Calculates the sum of positive integers divisible by 3
#include<iostream>
using namespace std;
int main(){
    int inputnum, total;
    cin >> inputnum;
    for( int i = 1; i <= inputnum; i++ ){
        if(i%3 == 0)  total = total+ i;

    }
    cout << total;
}
