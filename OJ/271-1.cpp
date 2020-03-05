/*************************************************************************
	> File Name: 271-1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月09日 星期四 18时26分19秒
 ************************************************************************/
#include<iostream>
#include <inttypes.h>
using namespace std;
#define max_n 300000
int num[max_n + 5];

int my_max[300005];
int my_min[300005];

int max_a(int a, int b) {
    int p = INT32_MIN;
    for (int i = a;  i < b; i++) {
        if (num[i] > p) p = num[i];
    }

    return p;
}
int min_b(int a, int b) {
    int p = INT32_MAX;
    for (int i = a; i < b; i++) {
        if (num[i] < p) p = num[i];
    }
    return p;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i <= n - k; i++) {
        my_max[i] = max_a(i, i + k);
        my_min[i] = min_b(i, i + k);
    }
    
    for (int i = 0; my_min[i]; i++) {
        i && cout << " ";
        cout << my_min[i];
    }
    cout << endl;
    for (int i = 0; my_max[i]; i++) {
        i && cout << " ";
        cout << my_max[i];
    }

    cout << endl;
    return 0;
}
