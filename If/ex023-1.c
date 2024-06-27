#include <stdio.h>
main()
{
    int sec, min, hour;
    printf("秒数を入力");
    scanf("%d",&sec);
    if (sec <= 5000){
        if (sec >= 0) {
            hour = sec / 3600;
            sec = sec % 3600;
            min = sec / 60;
            sec = sec % 60;
            printf("%d時間%d分%d秒",hour,min,sec);
        }
        else {
            printf("マイナスはエラーです");
        }
    }
    else {
        printf("エラーです");
    }

}