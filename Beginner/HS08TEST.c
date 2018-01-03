/*
 * https://www.codechef.com/problems/HS08TEST
 */
#include <stdio.h>

int main(void)
{
	float balance ;
	int withdraw;

	scanf ("%d %f", &withdraw, &balance);

	if (!(withdraw % 5) && ((float) withdraw + 0.50) <= balance)
		balance-= (withdraw + 0.50);

	printf("%.2f\n", balance);
	return 0;
}
