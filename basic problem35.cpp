#include<iostream>
using namespace std;

int main(){
    int testNum;
    int total, member, stuff;
    int greatprice, temp;

    cin >> testNum;
    for(; testNum > 0 ;testNum-- ){
        cin >> total >> member >> stuff;
        cin >> temp; // each stuff's cost
        greatprice = temp; // the biggest price and enough to buy enough # of gift
        for(; stuff > 1 ; stuff--){
            cin >> temp;
            if( temp*member > greatprice*member && temp*member <= total && greatprice*member <= total )
                greatprice = temp;
            else if( temp*member < greatprice*member && temp*member <= total && greatprice*member > total )
                greatprice = temp;
        }
        if( greatprice*member <= total ) cout << greatprice*member << endl;
        else cout << "Impossible\n";
    }
}
