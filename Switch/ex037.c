#include <stdio.h>
main()
{
	char moji;
	printf("文字を入れて:");
	scanf("%c", &moji);
	switch (moji){
	case '+': printf("加算です");
		break;
	case '-': printf("減算です");
		break;
	case '*': printf("乗算です");
		break;
	case '/': printf("除算です");
		break;
	case '%': printf("あまりです");
		break;
	default: printf("その他です");
	}
}