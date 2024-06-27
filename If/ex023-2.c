#include <stdio.h>
main()
{
    int year;
    printf("¼—ï‚ğ“ü—Í");
    scanf("%d", &year);
    if (year % 4 == 0) {
        printf("‚¤‚é‚¤”N‚Å‚·");
    }
    else {
        printf("‚¤‚é‚¤”N‚¶‚á‚ ‚è‚Ü‚¹‚ñ");
    }
}