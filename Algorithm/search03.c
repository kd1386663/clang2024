#include <stdio.h>
main() {
	int s,low,high,mid;
	low = 0;
	high = 10;
	int d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };
	printf("�T���l�����:");
	scanf("%d", &s);

	while (low <= high)
	{
	    mid = (low + high) / 2;
		if (s == d[mid]) 
		{
			break;
			printf(";;");
		}
		if(s > d[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
		
	}

	if (low > high) {
		printf("���̓f�[�^%d�͌�����Ȃ�����\n", s);
	}
	else {
		printf("��������\n");
	}
}