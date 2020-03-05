/*************************************************************************
	> File Name: 213.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月08日 星期三 23时47分07秒
 ************************************************************************/
#include<iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}


int main() {
    int N;
    int num[105], b[10] = {0};
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> num[i];
        if (num[i] == 100) {
            b[1]++;
        } else if (num[i] >= 90) {
            b[2]++;
        } else if (num[i] >= 80) {
            b[3]++;
        } else if (num[i] >= 70) {
            b[4]++;
        } else if (num[i] >= 60) {
            b[5]++;
        } else {
            b[6]++;
        }
    }
    sort(num, num + N, cmp);
    for (int i = 0; i < N; i++) {
        cout << num[i] << endl;
    }
    
    for (int i = 1; i <= 6; i++) {
        i - 1 && cout << " ";
        cout << b[i];
    }

    cout << endl;
    return 0;
}

