/*************************************************************************
	> File Name: 202.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月09日 星期四 20时54分02秒
 ************************************************************************/

#include<iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;

    int num[1005];
    int num2[1005];
    for (int i = 1; i <= n; i++) {
        cin >> num[i];
        num2[i] = i;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (num[j] > num[j + 1]) {
                swap(num[j], num[j + 1]);
                swap(num2[j], num2[j + 1]);
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        i - 1 && cout << " ";
        cout << num2[i];
    }
    cout << endl;
    return 0;
}
