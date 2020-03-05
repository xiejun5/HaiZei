/*************************************************************************
	> File Name: 36.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月06日 星期一 12时46分21秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 1000000

int is_val(int n, int base) {
    int x = n, temp = 0;
    if (n <= 1) return 0;
    while (n) {
        temp = temp * base + n % base;
        n /= base;
    }

    return x == temp;
}

int main() {
    int cnt = 0;
    for (int i = 1; i <= max_n; i++) {
        if (is_val(i, 10) && is_val(i, 2)) cnt += i;
    }

    cout << cnt << endl;
    return 0;
}
