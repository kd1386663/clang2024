#include <stdio.h>
main() {
	char s[5];
	int i;
	i = 0;
	printf("���������͂��Ă�������:");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++) {
		s[i] += 1;
	}
	printf("�Í���������́A%s\n", s);

}