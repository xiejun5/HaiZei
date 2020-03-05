/*************************************************************************
	> File Name: 198.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月08日 星期三 19时44分25秒
 ************************************************************************/

#include<iostream>
#include <cinttypes>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    long long  arr[100005] = {1, 1};

    for (int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
        arr[i] %= 1000000007;
    }

    cout << arr[n - 1] << endl;

    return 0;
}
