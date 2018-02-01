#include <stdio.h>

int main(void)
{
	int testcases;
	char s1[100], s2[100];
	int d, c, i;

	scanf("%d", &testcases);
	while(testcases--) {
		d = c = 0;
		scanf ("%s %s", s1, s2);
		for (i = 0; s1[i] != '\0'; i++)
		{
			if (s1[i] == '?' && s2[i] == '?')
				d++;
			else if (s1[i] != '?' && s2[i] == '?')
				d++;
			else if (s1[i] == '?' && s2[i] != '?')
				d++;
			else if (s1[i] != s2[i])
				c++;
		}
		printf("%d %d\n",
			c, (c + d));
	}

	return 0;
}
