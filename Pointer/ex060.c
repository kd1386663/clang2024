#include <stdio.h>
main()
{
	int flg = 0, j;
	char data[13] = "Language";
	char *p_data,moji;
	p_data = data;
	printf("data[] = %s\n",p_data);//�A�h���X���Q�Ƃ��Ă���̂ŃA�X�^���X�N�͂���Ȃ�
	printf("���������́H");
	scanf("%c", &moji);
	printf("�������ʂ́A");
	for (j = 1; *p_data++;j++) {
		if (*p_data == moji)
		{
			printf("%d ", j + 1);
			flg = 1;
		}
	}
	if (flg == 0) {
		printf("������Ȃ�����\n");
	}
	else {
		printf("�����ڂł�\n");

	}
	
}