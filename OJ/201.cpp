/*************************************************************************
	> File Name: 201.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月09日 星期四 19时22分44秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1005] = {0};
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        !arr[temp] && ++arr[temp];
    }
    int cnt = 0;
    int num[1005];
    for (int i = 0; i <= 1000; i++) {
        if (arr[i]) {
            num[cnt++] = i;
        }
        
    }
    cout << cnt << endl;
    for (int i = 0; num[i]; i++) {
        i && cout << " ";
        cout << num[i];
    }
    cout << endl;




    return 0;
}
