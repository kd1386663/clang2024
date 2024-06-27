#include <stdio.h>
main()
{
	char moji[256];
	char* p_moji;
	int cnt = 0;
	p_moji = moji;
	printf("•¶š—ñH:");
	gets(p_moji);
	while (*p_moji) {
			cnt++;
			*p_moji++;
			
	}
	printf("•¶š”‚ÍA%d •¶š‚Å‚·", cnt);
}