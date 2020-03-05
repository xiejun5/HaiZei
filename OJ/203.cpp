/*************************************************************************
	> File Name: 203.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月09日 星期四 09时44分55秒
 ************************************************************************/
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n, m, num[15][15], num2[105], cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> num[i][j];
            num2[cnt] = num[i][j];
            cnt++;
        }
    }

    for (int i = 0; i < m; i++) {
        int mmax = num[0][i];
        for (int j = 1; j < n; j++) {
            if (mmax < num[j][i]) {
                mmax = num[j][i];
            }
        } 
        cout << mmax << endl;
    }
    sort(num2, num2 + cnt);
    int sum = 0;
    for (int i = cnt - 1; i >= 0; i--) {
        sum += num2[i];
        cout << num2[i];
        if (i) {
            cout << " ";
        }
    }
    cout << endl;
    int ave = round(1.0 * sum / cnt);
    cout << ave << endl;
    int ans = 0;
    for (int i = cnt - 1; i >= 0; i--) {
        if (num2[i] >= ave) {
            ans++;
        } else {
            break;
        }
    }
    cout << ans << endl;
    
    return 0;
}
