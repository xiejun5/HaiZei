/*************************************************************************
	> File Name: 220-2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月19日 星期日 23时03分52秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
#include <string>
using namespace std;

struct student {
    int a, b, c, d, sum;
    string name;
};

bool cmp1(student a, student b) {
    if (a.a == b.a) {
        return a.name < b.name;
    }
    return a.a > b.a;
}
bool cmp2(student a, student b) {
    if (a.b == b.b) {
        return a.name < b.name;
    }
    return a.b > b.b;
}
bool cmp3(student a, student b) {
    if (a.c == b.c) {
        return a.name < b.name;
    }
    return a.c > b.c;
}

bool cmp4(student a, student b) {
    if (a.d == b.d) {
        return a.name < b.name;
    }
    return a.d > b.d;
}

bool cmp5(student a, student b) {
    if (a.sum == b.sum) {
        return a.name < b.name;
    }
    return a.sum > b.sum;
}
int main() {
    int n;
    student s[105];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i].name >> s[i].a >> s[i].b >> s[i].c >> s[i].d;
        s[i].sum = s[i].a + s[i].b + s[i].c + s[i].d;
    }
    sort(s, s + n, cmp1);
    for (int j = 0; j < 4; j++) {
        j && cout << " ";
        cout << s[j].name;
    }
    cout << endl;
    sort(s, s + n, cmp2);
    for (int j = 0; j < 4; j++) {
        j && cout << " ";
        cout << s[j].name;
    }
    cout << endl;
    sort(s, s + n, cmp3);
    for (int j = 0; j < 4; j++) {
        j && cout << " ";
        cout << s[j].name;
    }
    cout << endl;
    sort(s, s + n, cmp4);
    for (int j = 0; j < 4; j++) {
        j && cout << " ";
        cout << s[j].name;
    }
    cout << endl;
    sort(s, s + n, cmp5);
    for (int j = 0; j < 4; j++) {
        j && cout << " ";
        cout << s[j].name;
    }
    cout << endl;
    return 0;
}
