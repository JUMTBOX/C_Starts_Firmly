#include <stdio.h>

int main (void) {
    int num1, num2;
    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter another: ");
    scanf("%d", &num2);

    printf("%d + %d = %d\n", num1, num2, (num1 + num2));

    int x;
    float pi;
    /**
     * int 값을 다음의 float 값("%d%g")으로 읽음
     * x의 메모리 위치(&x)에 int 값을 저장
     * pi의 메모리 위치(&pi)에 float 값 저장
     */
    scanf("%d%g", &x, &pi);
    printf("value of x is %d \n", x);
    printf("value of pi is %g", pi);
}