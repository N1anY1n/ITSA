#include<iostream>
using namespace std;
int main(){
    int x,y; // x,y�y��
    cin >> x >> y ; //Ū�J�y��
    if( ( x <=100 && x >= -100) && ( y <=100 && y >= -100))
        // judge whether is inside or not
        cout << "inside\n";
    else cout << "outside\n";
}
