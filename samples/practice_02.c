#include <stdio.h>

/**
 * 사용자로부터 두 정수를 입력 받아 평균을 출력하는 예제를 작성.
 * 입력은 반드시 scanf_s() 함수를 사용하고
 * 출력은 반드시 printf() 함수를 이용할 것.
 * 평균값 출력 시 반드시 소수점 둘째 자리까지만 표시.
 */
int main(void) {
    int numA = 0, numB = 0;

    printf("두 정수를 입력하세요.: ");
    scanf_s("%d %d", &numA, &numB);

    const double avr = (numA + numB) / 2.0;
    printf("평균은 %.2f", avr);

    return 0;
}
