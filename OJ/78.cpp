/*************************************************************************
	> File Name: 78.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月04日 星期六 19时45分03秒
 ************************************************************************/

#include<iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
#define max_n 100


char str_a[max_n + 5], str_b[max_n + 5];
int arr_a[max_n + 5], arr_b[max_n + 5];

int main() {
    memset(arr_a, 0, sizeof(arr_a));
    memset(arr_b, 0, sizeof(arr_b));
    cin >> str_a;
    cin >> str_b;
    int len_a = strlen(str_a);
    int len_b = strlen(str_b);
    for (int j = 0; j < len_a; j++) {
        arr_a[j + 1] = str_a[len_a - j - 1] - '0'; 
    }
    for (int i = 0; i < len_b; i++) {
        arr_b[i + 1] = str_b[len_b - i - 1 ] - '0';
    }
    arr_a[0] = (len_a > len_b ? len_a : len_b);
    for (int i = 1; i <= arr_a[0]; i++) {
        arr_a[i] += arr_b[i];
        if (arr_a[i] < 10) continue;
        arr_a[i + 1] += arr_a[i] / 10;
        arr_a[i] %= 10;
        arr_a[0] += (i == arr_a[0]);
    }

    for (int j = arr_a[0]; j > 0; j--) {
        printf("%d\n", arr_a[j]);
    }
    return 0;
}
