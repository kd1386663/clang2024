#include <stdio.h>
main()
{
    int year;
    printf("西暦を入力");
    scanf("%d", &year);
    if (year % 4 == 0) {
        printf("うるう年です");
    }
    else {
        printf("うるう年じゃありません");
    }
}