/*************************************************************************
	> File Name: 166.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月12日 星期日 11时28分13秒
 ************************************************************************/

#include<iostream>
#include <cstring>
using namespace std;


int main() {
    string A, B;
    int n;
    cin >> A;
    cin >> n;
    cin >> B;
    
    cout << A.size() << endl;
    cout << A.find_first_of('a') + 1 << endl;
    A.insert(n - 1, B);
    cout << A << endl;
    return 0;
}
