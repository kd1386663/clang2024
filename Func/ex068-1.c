#include <stdio.h>
main()
{
	int a, b, c,d, ret;
	printf("�R�̐������󔒂ŋ�؂��ē���:");
	ret = scanf("%d%d%d%d", &a, &b, &c,&d);
	printf("ret = %d a = %d b = %d c = %d\n", ret, a, b, c);
	printf("��������́@�iCtrl+Z�ŏI��) a:");
	while (scanf("%d%d", &a,&b) != EOF) {
		printf("a = %d\n", a);
		printf("���������(Ctrl+Z) a:");
	}
}