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
	struct fruit data;
	struct fruit* p;
	p = &data;
	strcpy(p->name, "peach");
	p->price = 300;
	p->point = 5;
	p->number = 3;
	p->total = p->price * p->number;

	printf("¤•i–¼:\t\t%s\n", p->name);
	printf("‰¿Ši:\t\t%d‰~\n", p->price);
	printf("‚¨Š©‚ß“x:\t%dƒ|ƒCƒ“ƒg\n",p->point);
	printf("ŒÂ”:\t\t%dŒÂ\n", p->number);
	printf("‹àŠz:\t\t%d-\n", p->total);
}