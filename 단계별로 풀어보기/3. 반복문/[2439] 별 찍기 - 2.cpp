#include <stdio.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);

	for (int i = 1; i <= t; i++)
	{
		for (int j = 1; j <= t - i; j++)
		{
			printf(" ");
		}
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}