// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30790
//The sum of the ASCII values ​​of the string
#include<iostream>
#include<string>
using namespace std;
int main(){
    int testnum = 0 , i = 0, total = 0;
    string str;
    getline(cin , str);
    testnum = stoi(str);
    for ( ; testnum > 0 ; testnum--){
        getline(cin , str);
        for( i = 0,total = 0 ; i < str.length()  ; i++ )
            total = total+str[i];
        cout << total<<endl;
    } // for
}
