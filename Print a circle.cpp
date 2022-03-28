#include<bits/stdc++.h>
#include<iostream>    
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include<cmath>
#include<string>
#include<cstdlib>
#include<cstdio>
#include<ctime>
using namespace std;
//by : Amr Eid
 
int main(){
    const int DIMEN = 24;
    char canvas [DIMEN][DIMEN] = {{0}};
    for(int row = 0; row < DIMEN; row++){
        for(int col = 0; col < DIMEN; col++){
            int x = col - DIMEN/2;
            int y = DIMEN/2 - row;
            int sumsq = x*x + y*y;
            if((95 < sumsq) && (sumsq < 105))
                canvas[row][col] = '*';
        }
    }
    for(int row = 0; row < DIMEN; row++){
        for(int col = 0; col < DIMEN; col++)
            printf("%c ", canvas[row][col]);
        cout << endl;
    }
    return 0;
}
