/*************************************************************************
	> File Name: 199.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月08日 星期三 19时54分05秒
 ************************************************************************/

#include<iostream>
using namespace std;
int arr[15];
int num[100005] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int val(int x) {
    int sum = 0;
    for (int i = 1; i <= 10; i++ ) {
        sum += arr[i] * num[x - i];
    }

    return sum;
}
int main() {
    int k, m;
    cin >> k >> m;
    //读入a数组
    for (int i = 1; i <= 10; i++) {
        cin >> arr[i];
    }
    
    for (int i = 10; i <= k; i++) {
        num[i] = val(i) % m;
    }



    cout <<  num[k] << endl;
    return 0;
}
