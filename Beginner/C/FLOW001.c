/*
 * https://www.codechef.com/problems/FLOW001
 */
#include <stdio.h>

int main(void)
{
	int testcases, a, b;

	scanf("%d", &testcases);

	while(testcases--) {
		scanf("%d %d", &a, &b);
		printf("%d\n", (a + b));
	}

	return (0);
}
