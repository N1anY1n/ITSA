//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30760
//matrix inversion
#include<iostream>
using namespace std;
int main(){
    int row, column;
    while(1){
    cin >> row >> column;
    int x[10][10]; // matrix
    int i = 0, j = 0;
    for( i = 0; i < row; i++)
        for( j = 0 ; j < column ; j++)
            cin >> x[i][j];
    for( int z = 0 ; z < column ; z++ ){
        for( int a = 0 ;a < row ; a++ )
            cout << x[a][z] << " ";
        cout << endl;
    } // for
    }
} // main()
