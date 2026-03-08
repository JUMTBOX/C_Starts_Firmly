#include <stdio.h>

int main(void) {
    /*
     * mod(%) 연산자는 정수 타입(int, short, long, long long 등)의 피연산자만 사용할 수 있다.
     * int타입의 두 값에 나누기 연산자가 정수형 나누기를 수행하면 결괏값은 int이고, 나누기 연산에서 나온 소수점 이하의 값은 버린다.
     */

    // %s: 문자열 placeholder
    printf("Name: %s \n", "yang");
    // %g: 실수 placeholder
    printf("Age: %d, Height: %gft \n", 31, 6.5);
    // %d: 정수 placeholder
    printf("Year: %d, Dorm: %s", 2026, "Conifer \n");

    char ch;
    ch = 'A';
    // %c: char placeholder
    printf("ch value is %d which is the ASCII value of %c \n", ch, ch);
    ch = 99;
    printf("ch value is %d which is the ASCII value of %c", ch, ch);
    return 0;
}