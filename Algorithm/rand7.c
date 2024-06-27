#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int ans ,num,cnt;

	srand(time(0));//—”‚ð‰Šú‰»(ƒVƒƒƒbƒtƒ‹)‚·‚é
	rand(0);//—”‚ð‹Ïˆê‰»‚·‚é
	ans = rand() % 100 + 1;
	
	printf("”‚ ‚ÄƒQ[ƒ€\n");
	printf("‚P`‚P‚O‚O‚Ü‚Å‚Ì”‚ð­‚È‚¢‰ñ”‚Å‚ ‚Ä‚éƒQ[ƒ€\n");
	cnt = 0;
	while (1) {
		printf("”(‚P`‚P‚O‚O)‚ð“ü—Í:");
		scanf("%d", &num);
		cnt++;
		if (ans > num){
			printf("%d‚æ‚è‘å‚«‚¢‚Å‚·\n\n", num);
		}
		else if (ans < num) {
			printf("%d‚æ‚è¬‚³‚¢‚Å‚·\n\n", num);
		}
		else {
			printf("‚ ‚½‚èI%d‰ñ‚Å“–‚Ä‚Ü‚µ‚½\n", cnt);
		}
	}


}