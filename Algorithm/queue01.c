#include <stdio.h>
#define QUEUSIZE 8
int queue[QUEUSIZE];
int head = 0;
int tail = 0;
//プロトタイプ宣言
void display(void);
int enqueue(int d);
int dequeue(int* pd);
//メイン
main()
{
	int key, data, result;
	do {
		printf("\n\n◆円キューはi、デキューはoを入力して＞");
		key = getche();
		printf("\n");

		//エンキュー
		if (key == 'i') {
			printf("データ入力＞");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1) {
				printf("\n※※※キューが一杯です※※※\n");
			}
			else {
				display();
			}
		}
		//デキュー
		if (key == 'o') {
			result = dequeue(&data);
			if (result == -1) {
				printf("\n※※※キューが空です※※※\n");
			}
			else{
				printf("キューからデータ(%d)を取り出しました\n", data);
				display();
			}
		}
	} while (key != 'e');
}
//キュー表示関数
void display(void) {
	int i;
	printf("\n＝＝＝現在のキューの内容＝＝＝\n");
	for (i = 0; i < QUEUSIZE; i++) {
		printf("pueue[%2d]は%5d", i, queue[i]);
		if (i == head) {
			printf("←headが示している所(現在headは%d)", head);//確認用
		}
		if (i == tail) {
			printf("←tailが示している所(現在tailは%d)", tail);
		}
		printf("\n");
	}
	return;
}
//キューにデータを入れる(エンキューする)関数
int enqueue(int d) {
	if ((tail + 1) % QUEUSIZE == head) { return -1; }
	queue[tail] = d;
	tail++;
	tail = tail % QUEUSIZE;
	return 0;
}

int dequeue(int* pd) {
	if (head == tail) { return -1; }
	*pd = queue[head];
	queue[head] = 0;
	head++;
	head = head % QUEUSIZE;
	return 0;
}
