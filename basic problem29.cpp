// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30779
#include<iostream>
using namespace std;

int main(){
    char id[10];
    int idnum[10];
    int i, x1, x2; // index
    int p;
    cout << "½Ð¿é¤J¨­¤ÀÃÒ¦r¸¹: ";
    for( i = 0 ; i < 10 ; i++ )
        cin >> id[i];
    if( id[0] >= 65 && id[0] <= 72 )
        idnum[0] = id[0]-55;
    else if ( id[0] >= 74 && id[0] <= 78 )
        idnum[0] = id[0]-56;
    else if( id[0] >= 80 && id[0] <= 86 )
        idnum[0] = id[0]-57;
    else if( id[0] >= 88 && id[0] <= 89 )
        idnum[0] = id[0]-58;
    else if ( id[0] == 87 ) idnum[0] = 32;
    else if ( id[0] == 90 ) idnum[0] = 33;
    else if ( id[0] == 73 ) idnum[0] = 34;
    else if ( id[0] == 79 ) idnum[0] = 35;
    x1 = idnum[0]/10;
    x2 = idnum[0]%10;
    for( i = 1 ; i < 10 ; i++ )
        idnum[i] = id[i] - 48;
    p = x1+x2*9+8*idnum[1]+7*idnum[2]+6*idnum[3]+5*idnum[4]+4*idnum[5]+3*idnum[6]+2*idnum[7]+idnum[8]+idnum[9];
    if(p%10 == 0 )  cout<< "CORRECT!!!\n";
    else cout << "WRONG!!!\n";

}
