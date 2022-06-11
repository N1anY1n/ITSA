#include <iostream>
#include <iomanip>
using namespace std;
int main(){

    int mi; // 英哩
    float km; // 公里
    cin >> mi ; // 讀入輸入之英哩
    km = mi*1.6; // 轉換
    cout << setprecision(1) <<fixed << km ; // 印出公里數(含小數點後一位)

}
