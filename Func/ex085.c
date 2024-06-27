#include <stdio.h>
void strcnt(char *p_str1,char *p_str2);
main()
{
	char str1[256],str2[256];
	int mojisu;
	printf("配列 a:");
	gets(str1);
	printf("配列 b:");
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
	

	*p_str1 = p_str1[0];  // p_str1[0] は　*(p_str1+0)　と同じ
	*p_str2 = '\0';
}