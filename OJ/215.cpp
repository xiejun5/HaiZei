/*************************************************************************
	> File Name: 215.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月09日 星期四 23时44分13秒
 ************************************************************************/

#include<iostream>
using namespace std;

struct student {
    string name;
    int arg[50];
};
int main() {
    int n;
    cin >> n;
    struct student arr[50];
    int num[50];
    for (int i = 0; i < n; i++) {
        cin >> arr[i].name;
        int temp = 0;
        for (int j = 0; j < 4; j++) {
            cin >> arr[i].arg[j];
            temp += arr[i].arg[j];
        }
        num[i] = temp;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (num[j] < num[j + 1]) {
                swap(num[j], num[j + 1]);
                swap(arr[j].name,arr[j + 1].name);
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        
        cout << arr[i].name << endl;
    }



    

    return 0;
}
