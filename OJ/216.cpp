/*************************************************************************
	> File Name: 216.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月09日 星期四 19时49分16秒
 ************************************************************************/

#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    string name[105];

    for (int i = 0; i < n; i++) {
        cin >>  name[i];
    }

    for (int i = 0; i < n; i++) {
        name[i].erase(0,3);
    }

    sort(name, name + n);

    for (int i = 0; i < n; i++) {
        cout << name[i] << endl;
    }
    return 0;
}
