#include <stdio.h>
main() {
	char s[5];
	int i,k[5],y;
	i = 0;
	y = 0;
	srand(time(0));
	printf("���������͂��Ă�������:");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++) {
		k[i] = rand() % 5 + 1;
		s[i] += k[i];
	}
	printf("�Í���������́A%s\n", s);
	printf("�������L�[�́A");
	for (y = 0 ; y < i ; y++ ) {
		printf("%d", &k[y]);

	}

}