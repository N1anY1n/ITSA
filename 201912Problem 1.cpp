//201912 problem 1
//input:
//3
//302 3
//503 501
//10000 600
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int testnum;
    int in, out;
    float price;
    int i, j;
    cin >> testnum;
    for( i = 0 ; i < testnum ; i++ ){
        cin >> in >> out;
        if( in <= 300 )
            price = in*3;
        else if( in > 300 && in <= 500 )
            price = (in*3)*0.9 ;
        else if( in > 500 && in <= 1000 )
            price = (in*3)*0.75 ;
        else    price = (in*3)*0.5;
        if( out <= 300)
            price = price + out*6;
        else if( out > 300 && out <= 500 )
            price = price + out*6;
        else if( out > 500 && out <= 1000 )
            price = price + (out*6)*0.9;
        else    price = price + (out*6)*0.75;
        cout<<fixed << setprecision(0)<< price<<endl;
    }



}
