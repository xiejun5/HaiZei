#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int L, R;
    cin >> L >> R;
    int arr[10000] = {0};
    int k, s;
    for (int i = 1; i <= R; i++) {
        scanf("%d%d", &k, &s);
        for (int j = k; j <= s; j++) {
            arr[j] = 1;
        }
    }
    int sum = 0;
    for (int i = 0; i <= L; i++) {
        if (!arr[i]) sum += 1;
    }
    cout << sum << endl;
	return 0;
}
