// judge prime number
#include<iostream>
using namespace std;
int main(){
    int num = 0, count = 0;
    cin >> num;
    for( int i = 2; i <= num; i++){
        if( num%i == 0 ) count++;

    }
    if( count == 1 ) cout<<"YES\n";
    else cout << "NO\n";

} // main()
