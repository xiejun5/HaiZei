/*************************************************************************
	> File Name: 211.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月09日 星期四 09时35分33秒
 ************************************************************************/

#include<iostream>
#include <cstring>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    string name[35];
    string names[35];

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        reverse(name[i].begin(), name[i].end());
    }
    sort(name, name + n);
    for (int i = 0; i < n; i++) {
        cout << name[i] << endl;
    }
    return 0;
}
