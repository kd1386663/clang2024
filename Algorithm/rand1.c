#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int kazu;

	srand(time(0));//—”‚ğ‰Šú‰»(ƒVƒƒƒbƒtƒ‹)‚·‚é
	rand(0);//—”‚ğ‹Ïˆê‰»‚·‚é
	kazu = rand();
	printf("”­¶‚µ‚½—”‚Í%d‚Å‚·\n", kazu);

}