#include <stdio.h>

int main(void)
{
	int testcases;
	char s1[100], s2[100];
	int i;

	scanf("%d", &testcases);
	while(testcases--) {
		scanf ("%s %s", s1, s2);
		for (i = 0; s1[i] != '\0'; i++)
		{
			if (s1[i] == '?' && s2[i] == '?')
				continue;
			else if (s1[i] != '?' && s2[i] == '?')
				continue;
			else if (s1[i] == '?' && s2[i] != '?')
				continue;
			else if (s1[i] != s2[i])
				break;
		}
		if (s1[i] !='\0')
			printf("No\n");
		else
			printf("Yes\n");
	}

	return 0;
}
