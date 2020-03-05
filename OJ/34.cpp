/*************************************************************************
	> File Name: 34.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月06日 星期一 13时25分00秒
 ************************************************************************/

#include<iostream>
using namespace std;

#define max_n 2540160

int num[10];
void init() {
    num[0] = 1;
    for (int i = 1; i < 10; i++) {
        num[i] = num[i - 1] * i;
    }

    return ;
}
int is_val(int n) {
    int x = n, temp = 0;
    while (n) {
        temp += num[n % 10];
        n /= 10;
    }
    return x == temp;
}
int main() {
    init();
    int sum = 0;
    for (int i = 3; i < max_n; i++) {
        if (is_val(i)) sum += i;
    }

    cout << sum << endl;
    return 0;
}
