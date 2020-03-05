/*************************************************************************
	> File Name: 271.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月09日 星期四 11时54分54秒
 ************************************************************************/

#include<iostream>
#include <inttypes.h>
using namespace std;
#define max_n 300000
int num[max_n + 5];
void max_a(int a, int b) {
    int p = INT32_MIN;
    for (int i = a;  i < b; i++) {
        if (num[i] > p) p = num[i];
    }

    cout << p;
}
int min_b(int a, int b) {
    int p = INT32_MAX, t = INT32_MIN;
    for (int i = a; i < b; i++) {
        if (num[i] < p) p = num[i];
    }
    return p;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    int p  = 0;
    int s = min_b(0, k);
    for (int i = 0; i <= n - k; i++) {
        i && cout << " ";
        if (i < k) continue;
        min_b(i, i + k);
    }
    cout  << endl;
    for (int i = 0; i <= n - k; i++) {
        i && cout << " ";
        max_a(i, i + k);
    }
    cout << endl;
    return 0;
}
