#include <stdio.h>

int main (void) {
    char ch = 0;
    ch = getchar(); // <-- Input Buffer 에서 char 하나 꺼내와라 (buffer 는 queue 형태)
    putchar(ch);
    putchar('Z');
    return 0;
}