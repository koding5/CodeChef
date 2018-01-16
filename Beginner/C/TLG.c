/*
 * https://www.codechef.com/problems/TLG
 */
#include <stdio.h>

int main(void)
{
	int testcases;
	int player1, player2;
	int tmp_player1, tmp_player2;
	int lead_p1, lead_p2;
	int lead;

	scanf("%d", &testcases);

	player1 = player2 = 0;
	lead_p1 = lead_p2 = 0;

	while(testcases--) {

		scanf("%d %d", &tmp_player1, &tmp_player2);

		player1 += tmp_player1;
		player2 += tmp_player2;

		lead = player1 - player2;
		if (lead > 0) {
			lead_p1 = (lead_p1 > lead ? lead_p1 : lead);
		} else {
			lead *= -1;
			lead_p2 = (lead_p2 > lead ? lead_p2 : lead);
		}
	}
	if (lead_p1 >= lead_p2)
		printf("1 %d\n", lead_p1);
	else
		printf("2  %d\n", lead_p2);

	return (0);
}
