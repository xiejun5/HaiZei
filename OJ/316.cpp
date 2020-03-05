/*************************************************************************
	> File Name: 316.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月09日 星期四 11时42分25秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 200000000
int num[max_n];

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}

int main() {

    int N;
    cin >> N;
    int sum  = 0;
    for (int i = 1; i <= N; i++) {
        sum += gcd(N, i);
    }
    cout << sum << endl;
    return 0;
}
