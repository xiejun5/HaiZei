/*************************************************************************
	> File Name: 214.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月04日 星期六 14时28分33秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    int arr[30];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> k;
    sort(arr, arr + n, greater<int>());
    double sum = 0;
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }
    printf("%.2f\n", sum / k);

    
    return 0;
}

