#include <stdio.h>

int sum(int x)
{
	int sum = 0;

	do {
		sum+=x;
	}	while (x--);

	return sum;
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
