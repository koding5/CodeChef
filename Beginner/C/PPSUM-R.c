#include <stdio.h>

int sum(int x)
{
	if (x >= 0)
	return x + sum(x-1);
	else
	return 0;
}

int main(void)
{
	int testcases, d, n;

	scanf("%d", &testcases);
	while(testcases--) {
		scanf("%d %d", &d, &n);
		while(d--) {
			n = sum(n);
		}
		printf("%d\n", n);
	}

	return 0;
}
