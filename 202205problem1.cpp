//202205 problem 1
//input:
//2
//3
//0 8 5
//6 8 10
//10 12 10
//4
//1 3 9
//2 5 8
//6 10 5
//8 10 8

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, m;
    cin >> n;// # of test

    vector<int> info2D(50);
    fill(info2D.begin(), info2D.end(), 0);  // initialize

    for(int i = 0; i < n;i++){
        int l,r,h;
        cin >> m; // # of house
        for(int j = 0; j < m;j++){
            cin >> l >> r >> h; // left right height
            for(;l <= r;l++)
                if( info2D[l] < h )
                    // if original height is smaller than new height => update
                    info2D[l] = h;
        }
        for(int k =0 ; k < r;k++)
            cout << info2D[k] << " ";
        cout << endl;
        fill(info2D.begin(), info2D.end(), 0); // initialize
    }

}
