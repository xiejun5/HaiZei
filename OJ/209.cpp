/*************************************************************************
	> File Name: 209.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月04日 星期六 09时04分43秒
 ************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;

struct arg {
    float success;
};
int main() {

    int N;
    scanf("%d", &N);
    struct arg num[105];

    for (int i = 0; i < N; i++) {
        cin >> num[i].success;
    }
    int  s = N;
    while (s) {
    for (int i = 0; i < N - 1; i++) {
        if (num[i].success > num[i + 1].success) {
            float temp;
            temp = num[i].success;
            num[i].success = num[i + 1].success;
            num[i + 1].success = temp;
        }
    }
        s--;
    }

    for (int i = 0; i < N; i++) {
        cout << num[i].success << endl;
    }
    return 0;
}
