/*************************************************************************
	> File Name: 446.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月08日 星期三 10时11分03秒
 ************************************************************************/

#include<iostream>
#include <cstring>
using namespace std;

#define  N  100
int num[N][N];


int main() {
    int n, p, q, t;
    cin >> n;
    p = 1;
    q = n;
    t = 1;
    for (int j = 0; j <= n; j++, p++, q--) {
        for (int i = p; i <= q; i++) {
            num[p][i] = t;
        }
        for (int i = p; i <= q; i++) {
            num[i][q] = t;
        }
        for (int i = n - j; i >= p; i--) {
            num[q][i] = t;
        }
        for (int i = n - j; i >= p + 1; i--) {
            num[i][p] = t;
        }
        t++;

    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            j - 1 && cout << " ";
            cout << num[i][j];
        }
        cout << endl;
    }
    
    return 0;
}
