#include <stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* p_tbl, i,j;
	p_tbl = tbl[0];
	printf("2次元配列tblの内容\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf(" %d", *p_tbl++);

		}
		printf("\n");
	}
		/*
	for (i = 0; i < (3 * 3); i++) {
		if (i % 3 == 0) {
			printf("\n");
		}
	}
		*/

} 
	












//
// 
//            ＿人人人人人人＿
//           ＞　　　　　　　＜
//           ＞ ポインタ変数 ＜
//           ＞　　　　　　　＜
//           ￣ Y^Y^Y^Y^Y^Y^￣
//   mmmmmmmm
//  (# ・ v ・) < なんだァ...てめェ...