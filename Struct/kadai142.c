#include <stdio.h>
struct data {
	char course[20], kyouka[20];
	int tani;
};
main()
{
	struct data data1;
	struct data* p;
	p = &data1;
	strcpy(p->course, "ゲームソフトIコース");
	strcpy(p->kyouka, "C言語");
	p->tani = 8;
	printf("コース名: %s\n", p->course);
	printf("教科名: %s\n", p->kyouka);
	printf("単位数: %d\n", p->tani);
}