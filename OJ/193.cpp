#include <stdio.h>

int n, k, s;
int num[100000];
int binary_search(int l, int r,int x) {
	while (l <= r) {
    int mid = (l + r) >> 1;
	if (num[mid] == x) return 1;
	if (num[mid] > x) r = mid - 1;
	else l = mid + 1;
    }

    return 0;
}
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	scanf("%d %d", &k, &s);
	
	int flag = binary_search(0, (n - 1), (s - k));
    if (flag == 1)
	    printf("%s\n", "Yes" );
    else 
        printf("%s\n", "No");
	
	return 0;
}
