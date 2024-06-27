#include <stdio.h>
main()
{
	double ia, ib;
	printf("実数値？");
	scanf("%lf%lf",&ia,&ib);
	printf("＊＊＊%lfと%lfの四則演算＊＊＊\n",ia,ib);
	printf("和 = %.6lf 差　= %.6lf 積 = %.6lf 商 = %.6lf", ia + ib, ia - ib, ia * ib, ia / ib);

}