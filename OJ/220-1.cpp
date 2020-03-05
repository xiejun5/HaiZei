/*************************************************************************
	> File Name: 220-1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月19日 星期日 22时47分27秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
#include <string>
using namespace std;

struct Student {
    string name;
    int score[5];
    int total_score;
    void read() {
        cin >> name;
        for (int i = 0; i < 4; i++) {
            cin >> score[i];
            total_score += score[i];
        }
        return ;
    }
};

#define MAX_N 100
#define cmp(x, y) bool cmp##x(Student &s1, Student &s2) {\
    if (s1.y > s2.y) return true;\
    if (s1.y == s2.y && s1.name < s2.name) return true;\
    return false;\
}

struct Student stu[MAX_N];

cmp(0, score[0]);
cmp(1, score[1]);
cmp(2, score[2]);
cmp(3, score[3]);
cmp(total, total_score);
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        stu[i].read();
    }
    sort(stu, stu + n,cmp0);
    for (int i = 0; i < 4; i++) {
        i && cout << " ";
        cout << stu[i].name;
    }
    cout << endl;
    sort(stu, stu + n, cmp1);
    for (int i = 0; i < 4; i++) {
        i && cout << " ";
        cout << stu[i].name;
    }
    cout << endl;
    sort(stu, stu + n, cmp2);
    for (int i = 0; i < 4; i++) {
        i && cout << " ";
        cout << stu[i].name;
    }
    cout << endl;
    sort(stu, stu + n, cmp3);
    for (int i = 0; i < 4; i++) {
        i && cout << " ";
        cout << stu[i].name;
    }
    cout << endl;
    sort(stu, stu + n, cmptotal);
    for (int i = 0; i < 4; i++) {
        i && cout << " ";
        cout << stu[i].name;
    }
    cout << endl;
    return 0;
}



