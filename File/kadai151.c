#include <stdio.h>
#include <string.h>
main()
{
	FILE* file;
	char data[10];
	char word1[10],word2[10];
	file = fopen("kadai151.txt", "w");

	printf("�X�P�W���[������͂��Ă��������iX�ŏI���j\n");
	scanf("%s%s%s", data, word1, word2);

	while ( strcmp(data,"X") != 0) {
		fprintf(file, "%s%s%s", data, word1, word2);
		scanf("%s%s%s",data ,word1,word2);
	}
	
	fclose(file);

	printf("�X�P�W���[���t�@�C���̓��e\n");
	file = fopen("kadai151.txt", "r");
	fscanf(file, "%s%s%s",data, word1,word2);
	printf("%s%s%s\n", data, word1, word2);
	fclose(file);

}