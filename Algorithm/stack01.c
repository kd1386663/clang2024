#include  <stdio.h>
#define STACKSIZE 8
int stack[STACKSIZE];
int sp = 0;

void display(void);
int push(int d);
int pop(int* pd);
main() {
	int key, data, result;
	do {
		printf("\n\n◆プッシュはi、ポップはoを入力して＞");
		key = getche();
		printf("\n");
		//プッシュ処理
		if (key == 'i') {
			printf("データ入力＞");
			scanf("%d", &data);
			result = push(data);
			if (result == -1) {
				printf("\n※※※スタックが一杯です※※※\n");
			}
			else {
				display();
				sp++;
			}
		}
		//ポップ処理
		if (key == 'o') {
			result = pop(&data);
			if (result == -1) {
				printf("\n※※※スタックが空です※※※\n");
			}
			else {
				printf("スタックからデータ（%d）を取り出しました\n",data);
				display();
				
			}
		}
	} while (key != 'e');
}
void display(void) {
	int i;
	printf("\n＝＝＝現在のスタックの内容＝＝＝\n");
	for (i = 0; i < STACKSIZE; i++) {
		printf("stack[%2d]は%5d", i, stack[i]);
		if (i == sp) {
			printf("←spが示している所(現在spは%d)", sp);//確認用
		}
		printf("\n");
	}
	return;
}
int push(int d) {
	if (stack[STACKSIZE-1] != 0) { return -1; }
	/*
	if (stack[sp] == 0) {
		stack[sp] = d;
	}
	*/
	stack[sp] = d;
	return 0;
}
int pop(int* pd) {
	if (stack[0] == 0) { return -1; }
	if (sp != 0) {
		sp--;
		*pd = stack[sp];
	}
	stack[sp] = 0;
	
	return 0;
}