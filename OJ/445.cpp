/*************************************************************************
	> File Name: 445.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月04日 星期六 19时10分41秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int n;
    int arr[10005];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int front = 0, behind = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] > arr[j] ) {
                i < j && ++front;
                i > j && ++behind;
            }
        }
        if (front == behind) ++ ans;
    }
    
    cout << ans << endl;

    return 0;
}
