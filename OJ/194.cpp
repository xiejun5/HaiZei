/*************************************************************************
	> File Name: 194.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月03日 星期五 19时47分47秒
 ************************************************************************/
#include <stdio.h>

int num[100000];
int n, s;

int binary_search(int x) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (num[mid] + x == s) return mid;
        if (num[mid] + x > s) r = mid - 1;
        else l = mid + 1;
    }

    return 0;
}
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    scanf("%d", &s);
    int flag = 0;
    for (int i = 0; i < n; i++) {
        int temp  = binary_search(num[i]);
        if (!temp || temp == i) continue;
        flag = 1;
        break;
    }
    printf("%s\n", flag ? "Yes" : "No");
    return 0;
}
