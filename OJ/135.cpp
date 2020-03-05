/*************************************************************************
	> File Name: 135.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月01日 星期六 18时56分12秒
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
int main () {
    int x, y, m, d;
    cin >> x >> y >> m >> d;
    d += x;

    while (d > month(y, m)) {
        d -= month(y, m);
        m++;
        if (m == 13) {
            m = 1;
            y++;
        }
    }
    
    cout << y << " " << m << " " << d << endl;
    return 0;


}
