#include <stdio.h>

/** 임시결과는 피연산자 표현범위 이상의 표현이 가능해야 한다  */
int main (void) {
    char ch = 'A';
    
    printf("%c\n", ch);

    printf("%c\n", ch + 1);
    printf("%d\n", ch + 1);
    printf("%c\n", 'A' + 2);

    printf("%d\n", 5.0 + 2); // 0 나옴
    printf("%f\n", 5.0 + 2);

    return 0;
}