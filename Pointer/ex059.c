#include <stdio.h>
main()
{
	char data[15] = "C Langurge";
	char data2[15];
	char *p_data, *p_data2;
	p_data = data;
	p_data2 = data2;
	printf("data[] = %s\n",p_data);//�A�h���X���Q�Ƃ��Ă���̂ŃA�X�^���X�N�͂���Ȃ�
	while (*p_data2++ = *p_data++);
	p_data2 = data2;
	printf("data2[] = %s\n", p_data2);
	while (*p_data2) {
		putchar(*p_data2++);
	}
	putchar('\n');
}