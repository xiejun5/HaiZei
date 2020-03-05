/*************************************************************************
	> File Name: 14.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月06日 星期一 13时48分05秒
 ************************************************************************/

#include<iostream>
using namespace std;

#define max_n 1000000

int num[max_n + 5];

long long is_val(long long  x) {
    if (x == 1) return 1;
    if (x <= max_n && num[x]) return num[x];
    int ret =  0;
    if (!(x & 1)) ret =  is_val(x >> 1) + 1;
    else ret = is_val(3 * x + 1) + 1;
    if (x <= max_n) num[x] = ret;

    return ret;
}


int main() {
    long long ans = 0, len = 0;
    for (int i = 1; i < max_n; i++) {
        long long tmp = is_val(i);
        if (tmp > len) {
            ans = i;
            len = tmp;
        }
    }

    cout << ans << endl;
    return 0;
}
