/*************************************************************************
	> File Name: 77.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月05日 星期日 11时17分16秒
 ************************************************************************/

#include<iostream>
#include <cstring>

using namespace std;
#define max_n 100

int arr[max_n + 5];


int main() {
    memset(arr, 0, sizeof(arr));
    int m, n;
    cin >> m >> n;
    arr[0] = 1;
    arr[1] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= arr[0]; j++) {
            arr[j] *= m;
            if (arr[j] < 10) continue;
            arr[j + 1] += arr[j] / 10;
            arr[j] %= 10;
            arr[0] += (j == arr[0]);
            cout << arr[j];
        }
    }

    for (int i = 0; i  <= arr[0]; i++) {
        cout << arr[i];
    }
    return 0;
}
