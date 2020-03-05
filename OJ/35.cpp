/*************************************************************************
	> File Name: 35.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月07日 星期二 20时36分56秒
 ************************************************************************/

#include<iostream>
using namespace std;


int main() {
    int b, e;
    cin >> b >> e;
    if (b < e && e > 0) {
        int i = b;
        if (b < 0) i = 0;
        for (; i <= e; i++) {
            cout << i << endl;
        }
    } else {
        printf("%s\n", "ERROR");
    }
    return 0;
}
