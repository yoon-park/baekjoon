#include <stdio.h>

using namespace std;

int main() {
	int origin, num, cnt;

	scanf("%d", &num);
	origin = num;
	cnt = 0;

	while (1) {
		num = (num % 10) * 10 + (num / 10 + num % 10) % 10;
		cnt += 1;

		if (origin == num) {
			printf("%d\n", cnt);
			break;
		}
	}
	
	return 0;
}