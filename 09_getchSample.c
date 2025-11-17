#include <stdio.h>

int main (void) {
    char ch = 0;
    printf("아무키나 누르면 다음으로 넘어갑니다. \n");
    ch = _getch(); // ????

    printf("입력한 키는 \n");
    putchar(ch);
    printf("입니다. \n");

    return 0;
}