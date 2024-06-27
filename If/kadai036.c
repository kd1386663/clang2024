#include <stdio.h>
main()
{
	int ia,ib;
	printf("®”‚PH");
	scanf("%d", &ia);
	printf("®”‚QH");
	scanf("%d", &ib);
	if (ia > ib) {
		printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d‘å‚«‚¢\n",ia,ib,ia - ib);
	}
	else if (ia < ib) {
		printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢\n",ia,ib,ib - ia);
	}
	else {
		printf("%d‚Æ%d‚Í“™‚µ‚¢\n",ia,ib);
	}
}