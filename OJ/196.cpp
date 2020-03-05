/*************************************************************************
	> File Name: 196.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月08日 星期三 19时39分04秒
 ************************************************************************/

#include<iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    int arr[100] = {0, 0, 1, 1,};

    for (int i = 4; i <= n; i++ ) {
        arr[i] =  arr[i - 2] + arr[i - 3];
    }
    cout << arr[n] << endl;
    return 0;
}
