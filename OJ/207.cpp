/*************************************************************************
	> File Name: 207.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 00时01分51秒
 ************************************************************************/

#include<iostream>
using namespace std;


typedef struct student {
    char name[100];
    int arg[5];
    int sum;
} Student;

int main() {
    int n;
    cin >> n;
    Student stu[30];

    for (int i = 0; i < n; i++) {
        cin >> stu[i].name;
        for (int j = 0; j < 4; j++) {
            cin >> stu[i].arg[j];
        }
    }
    int max_arg = 0;
    int cnt, max_a = 0, min_a = 101;
    for (int i = 0; i < n; i++) {
        stu[i].sum = 0;
        for (int j = 0; j < 4; j++) {
            stu[i].sum += stu[i].arg[j];
            if (stu[i].arg[j] > max_a) max_a = stu[i].arg[j];
            if (stu[i].arg[j] < min_a) min_a = stu[i].arg[j];
        }
        cout << stu[i].sum << endl;
        if (stu[i].sum > max_arg) {
            max_arg = stu[i].sum;
            cnt = i;
        }
    }
    cout << stu[cnt].name << endl;
    cout << max_a << " " << min_a << endl;

    
}

