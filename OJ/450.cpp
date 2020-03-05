/*************************************************************************
	> File Name: 450.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 11时50分37秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[105];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    for (int i = 0;i < n; i++) {
        i && cout << " ";
        cout << arr[i];
    }
    cout << endl;
    return 0;
}
