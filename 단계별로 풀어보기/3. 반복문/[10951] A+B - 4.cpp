#include <stdio.h>

using namespace std;

int main()
{
    int a, b;
 
 	while (scanf("%d %d", &a, &b) != EOF)	// end of file
	{
		printf("%d\n", a + b);
	}

	return 0;
}