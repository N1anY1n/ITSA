// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30749
#include<iostream>
using namespace std;
int main(){
    int x,y; // x,y®y¼Ð
    cin >> x >> y ; //Åª¤J®y¼Ð
    if( ( x <=100 && x >= -100) && ( y <=100 && y >= -100))
        // judge whether is inside or not
        cout << "inside\n";
    else cout << "outside\n";
}
