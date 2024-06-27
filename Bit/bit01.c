#include <stdio.h>



main() {
	ChangeFlag(UNIT * s);
	ClearFlag(UNIT * s);
}

while (1) {
	int a;
	DisplayStatus(*s);
	printf("‚Ç‚Ìó‘Ô‚ğ‰ğœ‚µ‚Ü‚·‚©H");
	printf("1:“Å 2:–°‚è 3:–ƒáƒ 4:‰Î 5:UŒ‚ª 6:UŒ‚« 7:‘S‰ğœ 0:I—¹");
	scanf("%d", &a);
	if (a == 0) {
		break;
	}
	switch(a){
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s &= 0;
		default:
			break;
	}
}