#include <stdio.h>
int goukei(int a, int b, int c);/* プロトタイプ宣言 */
float heikin(int a, int b, int c);
main()
{
	int a, b, c, kotae,cnt;
	float ave;
	printf("整数を3つ入力");
	scanf("%d%d%d", &a, &b, &c);
	kotae = goukei(a, b, c);
	ave = heikin(a, b, c);
	printf("合計は %d、平均は %.2f、\n", kotae, ave);

}

int goukei(int a, int b, int c) {
	int ans;
	ans = a + b + c;
	return ans;
}
float heikin(int a, int b, int c) {
	float num;
	num = (float)(a + b + c) / 3;
	return num;
}