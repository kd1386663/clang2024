#include <stdio.h>
main()
{
    int sec, min, hour;
    printf("�b�������");
    scanf("%d",&sec);
    if (sec <= 5000){
        if (sec >= 0) {
            hour = sec / 3600;
            sec = sec % 3600;
            min = sec / 60;
            sec = sec % 60;
            printf("%d����%d��%d�b",hour,min,sec);
        }
        else {
            printf("�}�C�i�X�̓G���[�ł�");
        }
    }
    else {
        printf("�G���[�ł�");
    }

}