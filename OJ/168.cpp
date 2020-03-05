/*************************************************************************
	> File Name: 168.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月08日 星期三 18时07分10秒
 ************************************************************************/
#include<iostream>
#include <cstring>
using namespace std;

char arr[105][100];

int main(){ 

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if (arr[i][0] >= 'a' && arr[i][0] <= 'z') arr[i][0] -= 32;
        for (int j = 1; j < strlen(arr[i]); j++) {
            if (arr[i][j] <= 'Z' && arr[i][j] >= 'A') arr[i][j] += 32;
        }
    }
	int i, j, m;
	char temp[100];
	for ( i = 0; i < N - 1; i++) {
        m = i;
        for ( j = i + 1; j < N; j++) {
            if (strcmp(arr[m],arr[j]) > 0) {
                m = j;
            }
        }
        strcpy(temp,arr[i]);
        strcpy(arr[i],arr[m]);
        strcpy(arr[m],temp);
    }

    for (int s = 0;  s < N; s++) {
        cout << arr[s] << endl;
    }

    
    return 0;
}
