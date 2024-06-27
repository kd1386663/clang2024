#include <stdio.h>
main() 
{
	int sec, min, hour;
	printf("•b”‚ğ“ü—Í\n");
	scanf("%d", &sec);
	if (sec <= 5000){
	    if (sec >= 3600) {
			hour = sec / 3600;
			sec = sec % 3600;
		}
		else
		{
			hour = 0;
		}
		if (sec >= 60) {
			min = sec / 60;
			sec = sec % 60;
		}
		else
		{
			min = 0;
		}
		printf("%dŠÔ%d•ª%d•b\n", hour, min, sec);

	}
	else {
		printf("ƒGƒ‰[\n");
	}
}