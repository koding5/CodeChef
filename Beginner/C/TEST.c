/*
 * https://www.codechef.com/problems/TEST
 */
#include <stdio.h>

int main(void)
{
	int num;

	while(1) {
		scanf("%d", &num);
		if (num == 42)
			break;
		printf("%d\n", num);
	}
	return (0);
}
