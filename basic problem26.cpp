// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30785
#include<stdio.h>
int main(){
    int n, i, temp;
    int num[10] = {0}, t[10] = {0}, f[10] = {0};
    scanf("%d", &n);
    for ( i = 0 ; i < n ; i++ )
        scanf("%d", &num[i]);

    for( int j = i-1; j > 0 ; j-- ){  // bubble sort (單看讀入的數字)
        for( int a = 0; a < j ; a++ ){
            if( num[a] > num[j] ){
                temp = num[j];
                num[j] = num[a];
                num[a] = temp;
            }
        }
    }




    for( i = 0; i < n ; i++ ) { // 各位數字和
        temp = num[i];
        for(int j = 0; temp > 0 ; j++ ){
            t[i] = t[i] + temp%10;
            temp = temp/10;
        } // for

        f[i] = temp;
    } // for

    temp = 0;

    for( int j = i-1; j >= 0 ; j-- ){ // bubble sort 個位數字和大小
        for( int a = 0; a <= j ; a++ ){
            if( t[a] > t[j] ){
                temp = num[j];
               //printf("%d\n", num[j]);
                num[j] = num[a];
               // printf("%d\n", num[j]);
                num[a] = temp;
            }
            else if( t[a] == t[j] && f[a] > f[j] ){ // 如果數字和相同比最前面為數之數字大小

                temp = num[j];
               //printf("%d\n", num[j]);
                num[j] = num[a];
               // printf("%d\n", num[j]);
                num[a] = temp;

            }
        }
    }

    for( int j = 0 ; j < i; j++ ) // 印出排序後之結果
    for( int j = 0 ; j < i; j++ ) // 印出排序後之結果
        printf("%d ", num[j]);

} // main()
