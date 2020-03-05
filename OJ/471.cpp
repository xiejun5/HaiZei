/*************************************************************************
	> File Name: 471.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月05日 星期日 09时51分31秒
 ************************************************************************/

#include<iostream>
#include <cstring>
using namespace std;
#define max_n 100

char str_a[max_n + 5], str_b[max_n + 5];
int arr_a[max_n + 5], arr_b[max_n + 5], arr_c[2 * max_n + 5];

int main() {
    memset(arr_a, 0, sizeof(arr_a));
    memset(arr_b, 0, sizeof(arr_b));
    memset(arr_c, 0, sizeof(arr_c));

    cin >> str_a;
    cin >> str_b;
    int len_a = strlen(str_a);
    int len_b = strlen(str_b);

    for (int i = 0; i < len_a; i++) arr_a[i] = str_a[len_a - i - 1] - '0';
    for (int i = 0; i < len_b; i++) arr_b[i] = str_b[len_b - i - 1] - '0';
    for (int i = 0; i < len_a; i++) {
        for (int j = 0; j < len_b; j++) {
            arr_c[i + j] += arr_a[i] * arr_b[j];
            if (arr_c[i + j] < 10) continue;
            arr_c[i + j + 1] += arr_c[i + j] / 10;
            arr_c[i + j] %= 10;
        }
    }
    int len_c = len_a + len_b;
    while (!arr_c[len_c]) len_c--;
    for (int i = len_c; i >= 0; i--) {
        cout << arr_c[i];
    }
    
    return 0;
}
