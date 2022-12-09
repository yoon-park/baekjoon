#include <stdio.h>

using namespace std;

int main() {
	int n, num, v;
	int cnt = 0;
	scanf("%d", &n);

	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		a[i] = num;
	}

	scanf("%d", &v);

	for (int i = 0; i < n; i++) {
		if (a[i] == v) {
			cnt += 1;
		}
	}

	printf("%d\n", cnt);
	
	return 0;
}