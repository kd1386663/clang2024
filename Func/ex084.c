#include <stdio.h>
void strcnt(char *p_str1,char *p_str2);
main()
{
	char str1[256],str2[256];
	int mojisu;
	printf("������H:");
	gets(str1);
	strcnt(str1,str2);
	printf("str1:%s\n",str1 );
	printf("str2:%s",str2);
}
void strcnt(char *p_str1, char *p_str2) {
	int cnt;
	for (cnt = 0; *p_str1 != '\0'; cnt++, p_str1++);
	cnt--;
	p_str1--;//p_str1�ɂ�\0�������Ă����ԂȂ̂ň���炷�A���l��cnt�����炷
	while (cnt >= 0) {
		*p_str2++ = *p_str1--;
		cnt--;
	}

	*p_str1 = p_str1[0];  // p_str1[0] �́@*(p_str1+0)�@�Ɠ���
	*p_str2 = '\0';
}