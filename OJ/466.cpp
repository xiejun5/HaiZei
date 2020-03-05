/*************************************************************************
	> File Name: 466.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月07日 星期二 10时21分12秒
 ************************************************************************/

#include<iostream>
using namespace std;


int is_val(int x) {
    int n = x, temp = 0;
    if (n < 10) return 1;
    while(x) {
        temp = temp * 10 + x % 10;
        x /= 10;
    }

    return n == temp;

}
int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (is_val(i)) {       
             cnt++;
        }
}
    cout << cnt << endl;
    return 0;
}
