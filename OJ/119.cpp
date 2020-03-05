/*************************************************************************
	> File Name: 119.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月04日 星期二 22时17分58秒
 ************************************************************************/

#include<iostream>
using namespace std;

int Day[14] = {
    0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};


int month(int y, int m) {
    if (Day[m] == 31) return 31;
    if (Day[m] == 30) return 30;
    if (y % 400 == 0 || y % 100 != 0 && y % 4 == 0) {
        return 29;
    } else {
        return 28;
    }
}
int main() {
    int y, m, d;
    cin >> y >> m >> d;
    
    if (m == 1 && d == 1) {
        cout << y - 1 << " 12 31" << endl;
        cout << y << " 1 2" << endl;
    } else if (m == 12 && d == 31) {
        cout << y << " 12 30" << endl;
        cout << y + 1 << " 1 1" << endl;
    } else if (d == month(y, m)) {
       cout << y << " " << m << " " << d - 1 << endl;
        cout << y << " " << m + 1 << " " << 1 << endl;
    } else if (d == 1) {
        cout << y << " " << m - 1 << " " << month(y, m - 1) << endl;
        cout << y << " " << m << " " << 2 << endl;
    } else {
        cout << y << " " << m << " " << d - 1 << endl;
        cout << y << " " << m << " " << d + 1 << endl;
    }

    return 0;
}
