#include <stdio.h>
main()
{
	char moji[256];
	char* p_moji;
	int cnt = 0;
	p_moji = moji;
	printf("文字列？:");
	gets(p_moji);
	while (*p_moji) {
			cnt++;
			*p_moji++;
			
	}
	printf("文字数は、%d 文字です", cnt);
}