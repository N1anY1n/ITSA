#include<iostream>
using namespace std;

int main(){
    float r ; // rate
    int n, p, get = 0;
    cin >> r >> n >> p;
    for(; n > 0 ; n--){;
        get = (get+p)*(r+1);
    }
    cout << get <<endl;

}
