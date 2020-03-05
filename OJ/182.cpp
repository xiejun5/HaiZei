/*************************************************************************mZ	> File Name: 182.cpp
	> Author: mZ
	> Created Time: 2020年01月05日 星期日 18时43分03秒
 ************************************************************************/

#include<iostream>
using namespace std;

int arr[1000000];
int max(int n,int x) {
    if (n > x) return n;
    else return x;
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int temp = max(arr[i], arr[i + 1]);
        if (temp > ans) ans = temp;
    }

    cout << ans << endl; 

    
    return 0;
}
