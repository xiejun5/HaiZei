/*************************************************************************
	> File Name: 151.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月08日 星期三 14时07分21秒
 ************************************************************************/

#include<iostream>
#include <string>
using namespace std;

int check(char a, char b) {
    if (a == b) return 0;
    if (a == 'Y' && b == 'H' || a == 'O' 
        && b == 'Y' || a == 'H' && b == 'O') return 1;
    return 2;
}

int main() {
    char Xz, Xy;
    char Lz, Ly;

    cin >> Xz >> Xy;
    cin >> Lz >> Ly;

    if (check(Xz, Lz) == 1) {
        if (check(Xz, Ly) == 1 || check(Xz, Lz) == 0) {
            cout << "MING" << endl;
        } else if (check(Xz, Ly) == 2) {
           if (check(Xy,Ly) == 1) cout << "MING" << endl;
            else cout << "LIHUA" << endl;
        }
    } else if(check(XmZ,Lz) == 0) {
        if (check(Xy, Ly) == 1) cout << "MING" << endl;
        else if(check(Xy, Ly) == 2) cout << "LIHUA" << endl;
        else cout << "TIE" << endl;
    } else if(check(Xz, Lz) == 2){
        if (check(Xy, Lz) == 2 || check(Xy, Lz) == 0) {
            cout << "LIHUA" << endl;
        } else {
            if (check(Xy, Ly) == 1 || check(Xy,Ly) == 0) cout << "MING" << endl;
            else cout << "LIHUA" << endl;
        }

    }
    
    return 0;
}
