#include<stdio.h>
/*
試撰寫一個程式，可由鍵盤讀入一個 4 位數的整數，代表西洋的年份，
然後判別這個年份是否為閏年(每四年一閏，每百年不閏，每四百年一閏，
例如西元 1900 雖為 4 的倍數，但可被 100 整除，所以不是閏年，
同理， 2000 年是閏年，因可被 400 整數，而 2004 當然也是閏年，因可以被 4 整除）。Bissextile Year
*/
int main(){
    int year;
    scanf("%d", &year);
    if( year%4 == 0 && year%100 == 0 && year%400 != 0 ) printf("Common Year\n");
    else if ( year%4 == 0 || year%400 == 0 ) printf( "Bissextile Year\n" );
    else printf("Common Year\n");
}
