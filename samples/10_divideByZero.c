#include <stdio.h>

int main(void) {
    int ninput = 0;
    printf("정수를 입력하세요.: ");

    scanf_s("%d", &ninput);
    printf("몫:%d\n", 10/ninput); // 사용자 입력이 0이라면 OS에서 실행 차단
    return 0;
}