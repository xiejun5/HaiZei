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
    
    int temp = (A.size() > 100 ? 100 : A.size());
    cout << temp << endl;
    A.insert(n - 1, B);
    cout << A << endl;
    
    cout << A.size() - A.find_last_of('x') << endl;
    return 0;
}
