#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int enemy ,player;
	int i ;

	srand(time(0));//������������(�V���b�t��)����
	rand(0);//�������ψꉻ����
	enemy = rand() % 3;
	printf("�����o���܂���?\n");
	printf("(�P�F�O�[�@2�F�`���L�@�R�F�p�[) >");
	scanf("%d", &player);
	switch (player) {
		case 1:
			printf("\n�v���C���[�́A�O�[�ł�\n");
			break;
		case 2:
			printf("\n�v���C���[�́A�`���L�ł�\n");
			break;
		case 3:
			printf("\n�v���C���[�́A�p�[�ł�\n");
			break;
	}
	switch (enemy) {
	case 0:
		printf("�R���s���[�^�́A�O�[�ł�\n");
		break;
	case 1:
		printf("�R���s���[�^�́A�`���L�ł�\n");
		break;
	case 2:
		printf("�R���s���[�^�́A�p�[�ł�\n");
		break;
	}

	switch (player) {
	case 1://�O�[
		switch (enemy) {
		case 0:
			i = 2;
			break;
		case 1:
			i = 1;
			break;
		case 2:
			i = 0;
		}
		break;
	case 2://�`���L
		switch (enemy) {
		case 0:
			i = 0;
				break;
		case 1:
			i = 2;
				break;
		case 2:
			i = 1;
		}
		break;
	case 3:
		switch (enemy) {
		case 0:
			i = 1;
				break;
		case 1:
			i = 0;
				break;
		case 2:
			i = 2;
			break;
		}
	}
	
	switch (i) {// ((plyer - 1) - enemy + 3) % 3
	case 0:
		printf("\n�v���C���[�̕����ł�\n");
		break;
	case 1:
		printf("\n�v���C���[�̏����ł�\n");
		break;
	case 2:
		printf("\n�������ł�\n");
	}


}