#include <stdio.h>
void ascii_x();
void ascii_d();
main(int argc,char* argv[]) {
    printf("%s", argv[1]);
    switch ( *argv[1]) {
    case 'h':
        ascii_x();
        break;
    case 'd':
        ascii_d();
        break;
    default:
        ascii_d();
        break;
    }
    if (argv[1] == NULL) {
        ascii_d();
    }

}
void ascii_x() {
    int i = 0x41;
    printf("%c--- 0x%x %c--- 0x%x %c--- 0x%x %c--- 0x%x %c--- 0x%x", i, i, i + 1, i + 1, i + 2, i + 2, i + 3, i + 3, i + 4, i + 4);
}

void ascii_d() {
    int i = 0x41;
    printf("%c--- %d %c--- %d %c--- %d %c--- %d %c--- %d", i, i, i + 1, i + 1, i + 2, i + 2, i + 3, i + 3, i + 4, i + 4);
}