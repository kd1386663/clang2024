#include <stdio.h>
int goukei(int a, int b, int c);/* �v���g�^�C�v�錾 */
float heikin(int a, int b, int c);
main()
{
	int a, b, c, kotae,cnt;
	float ave;
	printf("������3����");
	scanf("%d%d%d", &a, &b, &c);
	kotae = goukei(a, b, c);
	ave = heikin(a, b, c);
	printf("���v�� %d�A���ς� %.2f�A\n", kotae, ave);

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