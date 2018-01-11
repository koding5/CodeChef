/*
 * https://www.codechef.com/problems/FCTRL
 */
#include <stdio.h>

#define POWER(x)	(x * 5)
int main(void)
{
	int testcases,power, zeros, tmp;
	unsigned long number;

	scanf("%d", &testcases);
	while(testcases--)
	{
		power = 5;
		zeros=0;
		scanf("%lu", &number);
		while (1) {
			tmp = (number/power);
			if (tmp < 1)
				break;
			zeros +=tmp;
			power = POWER(power);
		}
		printf("%d\n", zeros);
	}
	return (0);
}
