/*************************************************************************
	> File Name: 195.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月03日 星期五 20时42分34秒
 ************************************************************************/
#include <stdio.h>
int n, m;
int num[100000];
int arr[100000];

int binary_search(int x) {
    int l = 0; r = n - 1;
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (num[mid] == x) return mid;
        if (num[mid] > x) r = mid - 1;
        else l = mid + 1;
    }

    return 0;
}
int main() {
    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    for (int j = 0; j < m; j++) {
        scanf("%d", &arr[j]);
    }

    for (int i = 0; i < m; i++) {
        int temp = binary_search(arr[i]);
        if (temp) {
            for (int i = 0; i )
        } 
    }
    return 0;
}
