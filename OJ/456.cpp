/*************************************************************************
	> File Name: 456.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 10时12分40秒
 ************************************************************************/

#include<iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    int num[1000005] = {0};

    for (int i = 1; i <= n; i++) {
        int temp;
        cin >> temp;
        num[temp] += 3;
    }

    for (int i = 1; i <= 100000; i++) {
        if (num[i] & 1) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
