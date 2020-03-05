/*************************************************************************
	> File Name: 440.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 15时39分02秒
 ************************************************************************/

#include<iostream>
using namespace std;

int num[10] ={0};


int main() {
    int n, x;
    cin >> n >> x;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int temp = i;
        while (temp) {        
            if (temp % 10 == x) ++cnt;
            temp /= 10;
        }
    }

    cout << cnt << endl;

    return 0;
}
