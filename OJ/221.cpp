/*************************************************************************
	> File Name: 221.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 15时59分11秒
 ************************************************************************/

#include<iostream>
#include <cinttypes>
#include <algorithm>
using namespace std;


int main() {
    int n, m;
    cin >> n >> m;
    int arr[100000];
    int num[100000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

    }
    for (int i = 0; i < m; i++) {
        cin >> num[i];
    }
    sort(arr, arr + n);
    int cnt[100000] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (num[j] <= arr[i]) {
                cnt[i] += 1;
                num[j] = INT32_MAX;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << cnt[i] << endl;
    }
    return 0;
}
