#include<stdio.h>
/*
�ռ��g�@�ӵ{���A�i����LŪ�J�@�� 4 ��ƪ���ơA�N���v���~���A
�M��P�O�o�Ӧ~���O�_���|�~(�C�|�~�@�|�A�C�ʦ~���|�A�C�|�ʦ~�@�|�A
�Ҧp�褸 1900 ���� 4 �����ơA���i�Q 100 �㰣�A�ҥH���O�|�~�A
�P�z�A 2000 �~�O�|�~�A�]�i�Q 400 ��ơA�� 2004 ��M�]�O�|�~�A�]�i�H�Q 4 �㰣�^�CBissextile Year
*/
int main(){
    int year;
    scanf("%d", &year);
    if( year%4 == 0 && year%100 == 0 && year%400 != 0 ) printf("Common Year\n");
    else if ( year%4 == 0 || year%400 == 0 ) printf( "Bissextile Year\n" );
    else printf("Common Year\n");
}
