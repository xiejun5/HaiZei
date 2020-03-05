/*************************************************************************
	> File Name: 176.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月03日 星期五 21时03分07秒
 ************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char arr[1000];
    char num[1000];
    
    scanf("%[^\n]s", arr);
    getchar();
    scanf("%s", num);
    
    int len1 = strlen(arr);
    int len2 = strlen(num);
    int ans = 0;
    for (int i = 0; i <= len1 - len2; i++) {
        if (strncmp(num, &arr[i], len2) == 0) {
            ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}
