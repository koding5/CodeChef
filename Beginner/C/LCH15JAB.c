#include <stdio.h>
#include <string.h>

int main(void)
{
	int alpha[26] = {0,};
	int testcases, i, total, high;
	char string[1000];

	scanf("%d", &testcases);
	while(testcases--)
	{
		total = high = 0;
		scanf("%s", string);
		for (i = 0; string[i] != '\0'; i++)
			alpha[string[i] - 'a']++;

		for (i = 0; i < 26; i++) {
			total+=alpha[i];
			if (alpha[i] > high)
				high = alpha[i];
			alpha[i] = 0;
		}
		if ((total - high) == 0 || high == (total - high))
			printf("YES\n");
		else
			printf("NO\n");

	}
	return 0;
}
