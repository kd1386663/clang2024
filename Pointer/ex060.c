#include <stdio.h>
main()
{
	int flg = 0, j;
	char data[13] = "Language";
	char *p_data,moji;
	p_data = data;
	printf("data[] = %s\n",p_data);//アドレスを参照しているのでアスタリスクはいらない
	printf("検索文字は？");
	scanf("%c", &moji);
	printf("検索結果は、");
	for (j = 1; *p_data++;j++) {
		if (*p_data == moji)
		{
			printf("%d ", j + 1);
			flg = 1;
		}
	}
	if (flg == 0) {
		printf("見つからなかった\n");
	}
	else {
		printf("文字目です\n");

	}
	
}