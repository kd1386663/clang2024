#include <stdio.h>
main() 
{
	int sec, min, hour;
	printf("�b�������\n");
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
		printf("%d����%d��%d�b\n", hour, min, sec);

	}
	else {
		printf("�G���[\n");
	}
}