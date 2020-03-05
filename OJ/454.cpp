/*************************************************************************
	> File Name: 454.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 10时59分17秒
 ************************************************************************/

#include<iostream>
using namespace std;


int main() {

    int n, cnt = 0;
    cin >> n;
    int num[1005] = {0};
    for (int i = 1; i <= n; i++) {
        int temp;
        cin >> temp;
        if (!num[temp]) {
            ++num[temp];
            cnt++;
        };
    }
    cout << cnt << endl;
    int f = 0;
    for (int j = 1; j <= 1000; j++) {
        if (!num[j]) continue;
        f && cout << " ";
        f++;
        cout << j;
        
    }
    return 0;
}
