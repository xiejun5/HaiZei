/*************************************************************************
	> File Name: 204.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月04日 星期六 15时37分19秒
 ************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int n;
    int student[30][30];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> student[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        int j = i;
        cout << student[i][j] << endl;
    }
    return 0;
}
