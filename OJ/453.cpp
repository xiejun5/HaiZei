/*************************************************************************
	> File Name: 453.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 11时16分42秒
 ************************************************************************/

#include<iostream>
using namespace std;


int main() {
    int n, k;
    cin >> n >> k;

    int num[30005] = {0};

    for (int i = 1; i <= n; i++) {
        cin >> num[i];
        num[i] && num[i] ;
    }
    
    int temp = 0; 
    for (int i = 1; i <= 30000; i++) {

        ++temp;
        if (temp == k) break;
    }
    cout << (temp ? num[temp] : "NO RESULT") << endl;
    return 0;
}
