#include <stdio.h>
struct data {
	char course[20], kyouka[20];
	int tani;
};
main()
{
	struct data data1;
	strcpy(data1.course, "ゲームソフトIコース");
	strcpy(data1.kyouka, "C言語");
	data1.tani = 8;
	printf("コース名: %s\n", data1.course);
	printf("教科名: %s\n", data1.kyouka);
	printf("単位数: %d\n", data1.tani);
}