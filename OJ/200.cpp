/*************************************************************************
	> File Name: 200.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月07日 星期二 21时25分25秒
 ************************************************************************/

#include<iostream>
#include <cstdio>
using namespace std;
#define max_n 40
int arr[max_n] = {4, 7};

int main() {
    int  n;
    cin >> n;
    double ans = 4.0 / 7;
    for (int i = 2; i <= n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
        ans += 1.0 * arr[i - 1] / arr[i];
    }
    cout << arr[n - 1] << "/" << arr[n] << endl;
    printf("%.2f\n", ans);
    
    return 0;
}
