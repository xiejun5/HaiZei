/*************************************************************************
	> File Name: 192.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月04日 星期六 15时15分52秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include <cmath>
using namespace std;

double cons(double x) {
    return x * exp(x);
}
int main() {
    double a;
    cin >> a;
    double l = 0,r  = 30;
    while (r - l > 0.000001) {
        double mid = (l + r) / 2;
        if (cons(mid)  > a) {
            r = mid;
        } else {
            l = mid;
        }
    }
    printf("%.4f\n", l);
    
    return 0;
}
