#include <stdio.h>
main() {
	char s[5];
	int i;
	i = 0;
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++) {
		s[i] += 1;
	}
	printf("ˆÃ†‰»•¶š—ñ‚ÍA%s\n", s);

}