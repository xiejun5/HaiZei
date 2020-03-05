/*************************************************************************
	> File Name: 206.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月08日 星期三 16时43分56秒
 ************************************************************************/

#include<iostream>
using namespace std;

struct student {
    float arr[35];
    float sum;
};

int main() {
    int n, m;
    cin >> n >> m;
    
    struct student num[35];
    num[35].sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> num[i].arr[j];
        }
    }
    for (int i = 0;  i < m; i++) {
        for (int j = 0; j < n; j++) {
            num[i].sum += num[j].arr[i];
        }
    }

    for (int i = 0; i < m; i++) {
        printf("%g\n", num[i].sum);
    }
    return 0;
}
