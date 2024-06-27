#include <stdio.h>
main() {
	char s[5];
	int i,k[5],y;
	i = 0;
	y = 0;
	srand(time(0));
	printf("文字列を入力してください:");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++) {
		k[i] = rand() % 5 + 1;
		s[i] += k[i];
	}
	printf("暗号化文字列は、%s\n", s);
	printf("複合化キーは、");
	for (y = 0 ; y < i ; y++ ) {
		printf("%d", &k[y]);

	}

}