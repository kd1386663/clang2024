#include <stdio.h>
main()
{
	int ia,ib;
	printf("�����P�H");
	scanf("%d", &ia);
	printf("�����Q�H");
	scanf("%d", &ib);
	if (ia > ib) {
		printf("%d�̂ق���%d���%d�傫��\n",ia,ib,ia - ib);
	}
	else if (ia < ib) {
		printf("%d�̂ق���%d���%d������\n",ia,ib,ib - ia);
	}
	else {
		printf("%d��%d�͓�����\n",ia,ib);
	}
}