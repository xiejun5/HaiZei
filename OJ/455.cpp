/*************************************************************************
	> File Name: 455.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 10时32分06秒
 ************************************************************************/

#include<iostream>
#include <cinttypes>
using namespace std;


int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}
int my_cout(int a, int b) {
        int temp = gcd(a, b);
        cout << (a / temp) << "/" << (b / temp) << endl;
}
int main() {
    int arr[4];
    for (int i = 1; i <= 3; i++) {
        cin >> arr[i];
    }
    int temp = 0, ans = INT32_MAX;
    for (int i = 1; i <= 3; i++) {
        if (arr[i] > temp) temp = arr[i];
        if (arr[i] < ans) ans = arr[i];
    }
    my_cout(ans, temp);
    
    
    

    return 0;
}
