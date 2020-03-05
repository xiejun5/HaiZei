/*************************************************************************
	> File Name: 57-1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月05日 星期日 16时36分28秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <stdio.h>

int sum[7] = {0, 9, 180, 2700, 36000, 450000, 5400000};
int start[7] = {0, 1, 10, 100, 1000, 10000, 100000};

int quick(int a, int b) {
	int ans = 1;
	while(b) {
		if(b & 1) {
			ans *= a;
		}
		b >>= 1;
		a *= a;
	}
	return ans;
}

int getinx(int inx) {
	for (int i = 1; i <= 6; i++) {
		if (inx > sum[i]) {
			inx -= sum[i];
		} else if (inx == sum[i]) {
			return 9;
		} else {
			int cs = inx / i;
			int ys = inx % i;
			if (ys == 0) {
				cs = cs + start[i] - 1;
				cs %= 10;
				return cs;
			} else {
				cs = cs + start[i];
				int ttt = quick(10, i - ys);
				int kkk = cs / ttt;
				kkk %= 10;
				return kkk;
			}
		}
	}
	return -1;
}

int main () {
	int x, y, z;
	scanf("%d%d%d", &x, &y, &z);
	// for (int i = 1; i <= 1000; i++) {
	// 	printf("%d", getinx(i));
	// }
	int xx = getinx(x);
	int yy = getinx(y);
	int zz = getinx(z);
	printf("%d\n", xx * yy * zz);
	return 0;
}
