/*************************************************************************
	> File Name: 447.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 14时06分52秒
 ************************************************************************/

#include<iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    int arr[10] = {4, 7, 47, 477, 447, 747,774};
    
    for (int i = 0; arr[i]; i++) {
        if (n % arr[i] == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
