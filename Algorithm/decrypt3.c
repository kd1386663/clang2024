#include <stdio.h>
main() {
	char s[5];
	int i,k[5],y;
	srand(time(0));
	printf("���������͂��Ă�������:");
	scanf("%s", &s);
	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]�̕������L�[ > ",i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
	}
	printf("�����ςݕ�����́A%s\n", s);
	

}