#include <stdio.h>
void strcnt(char *p_str1,char *p_str2);
main()
{
	char str1[256],str2[256];
	int mojisu;
	printf("�z�� a:");
	gets(str1);
	printf("�z�� b:");
	gets(str2);
	strcnt(str1,str2);
	printf("str1:%s\n",str1 );
}
void strcnt(char *p_str1, char *p_str2) {
	int i, j;

	//for (i = 0; *(p_str1 + i) != '\0'; i++);
	//for (j = 0; *(p_str1 + i) = *(p_str2 + j); i++, j++);

	/*
	while (*p_str1 != '\0') {
		*p_str1++; 
	}
	while (*p_str1++ = *p_str2++);
	*/

	
	while (*p_str1 != '\0') {
		*p_str1++; 
	}
	while (*p_str2 != '\0') {
		*p_str1++ = *p_str2++;
	}
	

	*p_str1 = p_str1[0];  // p_str1[0] �́@*(p_str1+0)�@�Ɠ���
	*p_str2 = '\0';
}