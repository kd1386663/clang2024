#include <stdio.h>
main()
{
	char moji; //���������ϐ�moji�̐錾
	printf("�P��������:");//�u����������͂Ɖ�ʕ\���v
	scanf("%c", &moji);//�L�[�{�[�h����p�q��������͂��ĕϐ�moji�Ɋi�[
	printf("�啶���ɕϊ����� %c\n", moji-0x20);//�u�啶���ɕϊ����āv+�@�ϐ�moji���������đ啶���ɂ��ĕ\��

}