#include <stdio.h>
void strcnt(char *p_str1,char *p_str2);
main()
{
	char str1[256],str2[256];
	int mojisu;
	printf("文字列？:");
	gets(str1);
	strcnt(str1,str2);
	printf("str1:%s\n",str1 );
	printf("str2:%s",str2);
}
void strcnt(char *p_str1, char *p_str2) {
	int cnt;
	for (cnt = 0; *p_str1 != '\0'; cnt++, p_str1++);
	cnt--;
	p_str1--;//p_str1には\0が入っている状態なので一つ減らす、同様にcntも減らす
	while (cnt >= 0) {
		*p_str2++ = *p_str1--;
		cnt--;
	}

	*p_str1 = p_str1[0];  // p_str1[0] は　*(p_str1+0)　と同じ
	*p_str2 = '\0';
}