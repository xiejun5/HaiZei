/*************************************************************************
	> File Name: 40.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月07日 星期二 14时48分05秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 10000

int arr[3][max_n + 5] = {
    {1, 0}, {1, 0}, {1, 1}, {1, 1}
};

int main() {
    int n;
    cin >> n;

    while () {
        
    }
    int *a = arr[n % 3], *b = arr[(n - 2) % 3], *c = arr[(n - 3) % 3];

    for (int i = 2; i <= n; i++) {
        arr[i] = arr[i - 2] + arr[i - 3];
    }
    return 0;
}
