#include <stdio.h>
main() {
	char s[5];
	int i;
	i = 0;
	printf("暗号化文字列を入力してください:");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++) {
		s[i] -= 1;
	}
	printf("複合済み文字列は、%s\n", s);

}