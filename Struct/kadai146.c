#include <stdio.h>
struct fruit {
	char name[30];  //–¼‘O
	int price;      //‰¿Ši
	int point;      //‚¨Š©‚ß“x
	int number;     //ŒÂ”
	int total;      //‹àŠz
};

main()
{
	struct fruit data[3] = { {"peach",300,5,3,0},{"grape",200,4,10,0},{"watermelon",1500,5,8,0}};
	struct fruit* p;
	p = data;
	int gokei = 0;
	for (int i = 0; i < 3; i++) {
		p->total = p->price * p->number;
		printf("¤•i–¼:\t\t%s\n", p->name);
		printf("‰¿Ši:\t\t%d‰~\t", p->price);
		printf("‚¨Š©‚ß“x:\t%dƒ|ƒCƒ“ƒg",p->point);
		printf("\nŒÂ”:\t\t%dŒÂ\t", p->number);
		printf("‹àŠz:\t\t%d-\n", p->total);
		printf("\n\n");
		gokei += p->total;
		p++;
	}
	printf("‡Œv‹àŠz = %d-", gokei);
	

	
}