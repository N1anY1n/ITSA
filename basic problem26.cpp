#include<stdio.h>
int main(){
    int n, i, temp;
    int num[10] = {0}, t[10] = {0}, f[10] = {0};
    scanf("%d", &n);
    for ( i = 0 ; i < n ; i++ )
        scanf("%d", &num[i]);

    for( int j = i-1; j > 0 ; j-- ){  // bubble sort (���Ū�J���Ʀr)
        for( int a = 0; a < j ; a++ ){
            if( num[a] > num[j] ){
                temp = num[j];
                num[j] = num[a];
                num[a] = temp;
            }
        }
    }




    for( i = 0; i < n ; i++ ) { // �U��Ʀr�M
        temp = num[i];
        for(int j = 0; temp > 0 ; j++ ){
            t[i] = t[i] + temp%10;
            temp = temp/10;
        } // for

        f[i] = temp;
    } // for

    temp = 0;

    for( int j = i-1; j >= 0 ; j-- ){ // bubble sort �Ӧ�Ʀr�M�j�p
        for( int a = 0; a <= j ; a++ ){
            if( t[a] > t[j] ){
                temp = num[j];
               //printf("%d\n", num[j]);
                num[j] = num[a];
               // printf("%d\n", num[j]);
                num[a] = temp;
            }
            else if( t[a] == t[j] && f[a] > f[j] ){ // �p�G�Ʀr�M�ۦP��̫e�����Ƥ��Ʀr�j�p

                temp = num[j];
               //printf("%d\n", num[j]);
                num[j] = num[a];
               // printf("%d\n", num[j]);
                num[a] = temp;

            }
        }
    }

    for( int j = 0 ; j < i; j++ ) // �L�X�Ƨǫᤧ���G
    for( int j = 0 ; j < i; j++ ) // �L�X�Ƨǫᤧ���G
        printf("%d ", num[j]);

} // main()
