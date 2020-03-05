/*************************************************************************
	> File Name: 78-t.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月05日 星期日 09时36分56秒
 ************************************************************************/

#include<iostream>
#include <cstring>
using namespace std;
#define max_n 100

char str_a[max_n + 5], str_b[max_n + 5];
int arr_a[max_n + 5], arr_b[max_n + 5], arr_c[max_n + 5];

int main() {
    memset(arr_a, 0, sizeof(arr_a));
    memset(arr_b, 0, sizeof(arr_b));
    memset(arr_b, 0, sizeof(arr_c));
    cin >> str_a;
    cin >> str_b;
    int len_a = strlen(str_a);
    int len_b = strlen(str_b);

    for (int i = 0; i < len_a; i++) arr_a[i + 1] = str_a[len_a - i - 1] - '0';
    for (int i = 0; i < len_b; i++) arr_b[i + 1] = str_b[len_b - i - 1] - '0';

    arr_c[0] = (len_a > len_b ? len_a : len_b);

    for (int i = 1; i <= arr_c[0]; i++) {
        arr_c[i] += arr_a[i] + arr_b[i];
        if (arr_c[i] < 10) continue;
        arr_c[i + 1] += arr_c[i] / 10;
        arr_c[i] %= 10;
        arr_c[0] += (i == arr_c[0]);
    }

    for (int i = arr_c[0]; i > 0; i--) {
        cout << arr_c[i];
    }
    return 0;
}

