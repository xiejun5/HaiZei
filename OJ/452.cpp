/*************************************************************************
	> File Name: 452.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 11时38分38秒
 ************************************************************************/

#include<iostream>
using namespace std;


int main() {
    int N;
    cin >> N;
    int arr[10000];
    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
    }
    
    int cnt = 0;
    for  (int i = 1; i <= N; i++) {
        for (int j = 1; j < N; j++) {
            if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]),cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
