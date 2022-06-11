//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=53095
//202007 problem 1
//input:
//2
//10 20 30 40 50
//60 70 80 90 100
//output:
//55.0 35.0 45.0 55.0 65.0 75.0
#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

int main(){
    int numofs;
    vector<vector<int>> student;
    vector<double>averscore(6);
    fill(averscore.begin(),averscore.end(),0.0);
    // 0: total avg, 1: English avg, 2: math avg, 3: calculus avg, 4: programming avg, 5: algorithm avg
    cin >> numofs; // # of student
    student.resize(numofs); // set student size
    for(int i = 0; i < numofs ;i ++)
        student[i].resize(5); // set subject size
    for( int i = 0; i <numofs; i++ ){
        for( int j = 0; j < 5 ; j++ ) {
            cin >> student[i][j];
            averscore[0] = averscore[0] + student[i][j];
        }
    }

    for( int i = 0; i < numofs; i++){
        for( int j = 1, a = 0; j < 6; j++, a++) {
            averscore[j] = averscore[j] + student[i][a];
        }
    }
    averscore[0] = averscore[0] / (5*numofs); // 5 => # of subject
    for( int j = 1; j < 6; j++) {
        averscore[j] = averscore[j] / (numofs);
    }
    cout<<fixed<<setprecision(1)<<averscore[0]<<" "<<averscore[1]<<" "<<averscore[2]<<" "<<averscore[3]<<" "<<averscore[4]<<" "<<averscore[5];

}
