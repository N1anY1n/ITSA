#include<stdio.h>
int main(){
    int degree;
    float summer, unsummer;
    scanf("%d", &degree);
    if( degree <= 120 ) {
        summer = degree*2.10;
        unsummer = degree*2.10;
    }
    else if( degree >= 121 && degree <= 330 ){
        degree-=120;
        summer = 120*2.10+degree*3.02;
        unsummer = 120*2.10+degree*2.68;
    }
    else if( degree >= 331 && degree <= 500 ){
        degree-=330;
        summer = 120*2.10+210*3.02+degree*4.39;
        unsummer = 120*2.10+210*2.68+degree*3.61;
    }
    else if( degree >= 501 && degree <= 700 ){
        degree-=500;
        summer = 120*2.10+210*3.02+170*4.39+degree*4.97;
        unsummer = 120*2.10+210*2.68+170*3.61+degree*4.01;
    }
    else if( degree >= 701 ){
        degree-=700;
        summer = 120*2.10+210*3.02+170*4.39+200*4.97+degree*5.63;
        unsummer = 120*2.10+210*2.68+170*3.61+200*4.01+degree*4.50;
    }

    printf("Summer months:%.2f\n", summer );
    printf("Non-Summer months:%.2f\n", unsummer );

}
