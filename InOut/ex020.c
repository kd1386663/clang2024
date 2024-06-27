#include <stdio.h>
main()
{
	char moji; //文字が多変数mojiの宣言
	printf("１文字入力:");//「小文字を入力と画面表示」
	scanf("%c", &moji);//キーボードから英子文字を入力して変数mojiに格納
	printf("大文字に変換して %c\n", moji-0x20);//「大文字に変換して」+　変数mojiを処理して大文字にして表示

}