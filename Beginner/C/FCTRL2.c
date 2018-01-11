/*
 * https://www.codechef.com/problems/FCTRL2
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX	500
void fact(int num)
{
	int array[MAX];
	int prod, carry, idx, i, j;

	array[0] = 1;
	idx = 1;
	carry = 0;

	for (i = 1; i<= num; i++) {
		for (j = 0; j < idx; j++) {
			prod = array[j] * i + carry;
			array[j] = prod % 10;
			carry = prod / 10;
		}

		while (carry > 0) {
			array[idx] = carry % 10;
			carry = carry / 10;
			idx++;
		}
	}
	for (i= idx -1; i >= 0; i--)
		printf("%d", array[i]);
	printf("\n");
}

int main(void)
{
	int testcase, num;

	scanf("%d", &testcase);
	while(testcase--) {
		scanf("%d", &num);
		if (num != 1)
			fact(num);
		else
			printf("1\n");
	}
	return (0);
}
