/*
 * https://www.codechef.com/problems/FLOW014
 */
#include <stdio.h>

int main(void)
{
	int testcases;
	int h, t;
	float c;
	int total;

	scanf ("%d", &testcases);
	while(testcases--) {
		total = 0;
		scanf("%d %f %d", &h, &c, &t);
		total += (h > 50   ? 1 : 0);
		total += (c < 0.7  ? 3 : 0);
		total += (t > 5600 ? 5 : 0);
		switch(total) {
		case 1:
		case 3:
		case 5:
			printf("6\n");
			break;
		case 4:
			printf("9\n");
			break;
		case 8:
			printf("8\n");
			break;
		case 6:
			printf("7\n");
			break;
		case 9:
			printf("10\n");
			break;
		default:
			printf("5\n");
			break;
		}
	}
	return (0);
}
