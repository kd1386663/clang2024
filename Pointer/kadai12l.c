#include <stdio.h>
main()
{
	char moji[256];
	char* p_moji;
	int cnt = 0;
	p_moji = moji;
	printf("������H:");
	gets(p_moji);
	while (*p_moji) {
			cnt++;
			*p_moji++;
			
	}
	printf("�������́A%d �����ł�", cnt);
}