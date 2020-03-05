/*************************************************************************
	> File Name: 191.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月01日 星期六 18时19分13秒
 ************************************************************************/

#include<iostream>
#include <cstdio>
using namespace std;

int num[8000005] = {1, 1};

void init() {
    for (int i = 2; i * i <= 8000005; i++) {
        if (!num[i]) {
            for (int j = 2; i * j <= 8000000; j++) {
                num[i * j] = 1;
            }
        }
    }
}

int main() {
    init();
    int l, r;
    cin >> l >> r;
    int min1 = -1, min2, max1, max2;
    for (int i = l; i < r; i++) {
        if (!num[i]) {
            int nex = i + 1;
            while (num[nex]) {
                nex++;
            }
            if (nex > r) break;
            if (min1  == -1) {
                min1 = max1 = i;
                min2 = max2 = nex;
            } else if (min2 - min1 > nex - i) {
                min1 = i;
                min2 = nex;
            } else if (max2 - max1 < nex - i) {
                max1 = i;
                max2 = nex;
            }
        }
    }
    if (min1 == -1) {
        printf("There are no adjacent primes.\n");
    } else {
        printf("%d,%d are closest, %d,%d are most distant.\n", min1, min2, max1, max2);
    }
    return 0;
}


