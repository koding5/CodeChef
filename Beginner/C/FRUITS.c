#include <stdio.h>

int main(void)
{
	int testcases, apples, oranges, coins, diff;

	scanf("%d", &testcases);
	while(testcases--) {
		scanf("%d %d %d", &apples, &oranges, &coins);
		diff = 0;
		if (apples > oranges)
			diff = apples - oranges;
		else if (oranges > apples)
			diff = oranges - apples;

		diff -= (diff > coins ? coins : diff);

		printf("%d\n", diff);
	}
	return (0);
}
