#include <stdio.h>
enum BitState {
	Base = 0,            //00000000
    Poison = 1 << 0,     //00000001
	Sleep = 1 << 1,      //00000010
	Pralysis  = 1 << 2,  //00000100
	Burn = 1 << 3,       //00001000
	AtkUp = 1 << 4,      //00010000
	AtkDown = 1 << 5     //00100000
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlg(UINT *s);
void ClearFlg(UINT *s);
main()
{
	UINT MyState = Base;
	ChangeFlg(&MyState);
	DisplayStatus(MyState);
}

void DisplayStatus(UINT s) {
	printf("****現在の状態****\n");
	if (s & Poison) {
		printf("毒\n");
	}
	if (s & Sleep){
		printf("眠り\n");
	}
	if (s & Pralysis) {
		printf("麻痺\n");
	}
	if (s & Burn){
		printf("やけど\n");
	}
	if (s & AtkUp) {
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown) {
		printf("攻撃力ダウン\n");
	}
	if (s == Base) {
		printf("状態異常なし\n");
	}
	printf("********************\n");
}

void ChangeFlg(UINT* s) {
	int a;
	while (1) {
		printf("どの状態を付与しますか？\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 0:終了");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Pralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		}
	}
}