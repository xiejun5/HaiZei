/*************************************************************************
	> File Name: 169.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月13日 星期一 15时08分20秒
 ************************************************************************/

#include<iostream>
using namespace std;


int main() {
    int N;
    cin >> N;
    int num[200] = {0};
    
    for (int i = 0; i < N; i++) {
        char a;
        int b;
        cin >> a >> b;
        num[(int)a] = b;    
    }
    string arr;
    cin >> arr;

    int ans = 0;

    for (int i = 0; i < arr.size(); i++) {
        ans += num[(int)arr[i]];
    }
    
    cout << ans << endl;

    return 0;
}
