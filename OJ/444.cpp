/*************************************************************************
	> File Name: 444.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月04日 星期六 16时34分47秒
 ************************************************************************/

#include<iostream>
using namespace std;


int main() {
    int n, x;
    scanf("%d", &n);
    int arr[105];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);

    for (int i = 0; i < n - 1; i++) {
        i && printf(" ");
        if (i != x - 1) {
            printf("%d", arr[i]);

        } else {
            printf("%d ", arr[n - 1]);
            printf("%d", arr[i]);
        }
    }
    return 0;
}
