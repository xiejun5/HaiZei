/*************************************************************************
	> File Name: 220.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月19日 星期日 21时20分37秒
 ************************************************************************/

#include<iostream>
using namespace std;


typedef struct Student {
    char name[20];
    int arg[6];
} student;

typedef struct Arg {
    int test[6];
} arg;
int main() {
    int n;
    cin >> n;
    student stu[110];
    arg achievement[110];
    for (int i = 0; i < n; i++) {
        cin >> stu[i].name;
        getchar();
        for (int j = 0; j < 4; j++) {
            cin >> stu[i].arg[j];
        }
    }
    
    
    
    int sum[101] = {0}; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            sum[i] += stu[i].arg[j];
        }
    } 
    
    return 0;
}
