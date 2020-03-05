/*************************************************************************
	> File Name: 449.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月08日 星期三 09时28分44秒
 ************************************************************************/

#include<iostream>
#include <stdio.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    int a[100][100] = {1};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            if (i == 0 || j == 0) a[i][0] = 1;
            if (i > 0 && j != 0) {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
            j && cout << " ";
            cout << a[i][j];
            j == i && cout << endl;
        }
    }
    return 0;
}
