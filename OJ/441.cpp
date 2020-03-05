/*************************************************************************
	> File Name: 441.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 14时57分51秒
 ************************************************************************/

#include<iostream>
using namespace std;


int main(){ 
    int x, n;
    cin >> x >> n;
    int sum = 0, day;
    sum = n * 2;
    day = (x + n) / 7;
    cout << (sum - day * 2 * 2) << endl;
    return 0;
}
