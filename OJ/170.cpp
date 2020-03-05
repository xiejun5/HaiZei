/*************************************************************************
	> File Name: 170.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月08日 星期三 19时10分38秒
 ************************************************************************/

#include<iostream>
#include <cstring>
using namespace std;


int main(){
    int N;
    cin >> N;
   
    string arr[100];

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
        while (arr[i].find("Ban_smoking") != -1) {
            int len = arr[i].find("Ban_smoking");
            arr[i].replace(len, 11, "No_smoking");
        }
    }
    for (int i = 0; i < N; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
