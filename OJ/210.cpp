/*************************************************************************
	> File Name: 210.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月09日 星期四 09时23分13秒
 ************************************************************************/

#include<iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    int N;
    string num[30];
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }
    sort(num, num + N);
    for (int i = 0; i < N; i++) {
        i && cout << " ";
        cout << num[i];
    }
    return 0;
}
