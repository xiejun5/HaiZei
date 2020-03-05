#include <iostream>
#include <string.h>
using namespace std;

struct student {
    double arr[35];
    double arg;
};

int main() {
    double n, m;
    cin >> n >> m;

    struct student num[35];
    num[35].arg = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> num[i].arr[j];
            num[i].arg += num[i].arr[j];
        } 
    }

    for (int j = 0; j < n; j++) {
        printf("%.6f\n", num[j].arg / m);
    }

    
    
    

    return 0;
}
