/*************************************************************************
	> File Name: 448.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月04日 星期六 15时59分44秒
 ************************************************************************/

#include<iostream>
using namespace std;


int main() {
    int n, num;
    cin >> n;
    int arr[105];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> num;
    int flag  = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            flag = i + 1;
            break;
        }
    }
    cout << (flag ? flag : 0) << endl;
    
    return 0;
}
