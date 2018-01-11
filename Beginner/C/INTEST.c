/*
 * https://www.codechef.com/problems/INTEST
 */
#include <stdio.h>
int main(void)
{
	int testcases, count = 0;
	long divisor, number;

	scanf("%d %ld", &testcases, &divisor);
	while(testcases--)
	{
		scanf("%ld", &number);
		count+= !(number%divisor);
	}
	printf("%d\n", count);
	return (0);
}
