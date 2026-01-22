#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * 사용자로부터 이름과 나이를 키보드로 입력 받아
 * 출력하는 프로그램을 작성.
 * 
 * 이름은 gets_s(...), 나이는 scanf_s(...) 함수로 입력 받고 printf() 함수로 출력
 * 
 * @example {
 *  나이를 입력하세요: 20
 *  이름을 입력하세요: 철수
 *  
 *  당신의 나이는 20살이고 이름은 '철수' 입니다. 
 * } 
 */
int main (void) {
    int age = 0;
    char name[32] = {0};
    
    printf("나이를 입력하세요: ");
    scanf_s("%d%*c", &age, sizeof(age));
    
    printf("이름을 입력하세요: ");
    gets_s(name, sizeof(name));

    printf("당신의 나이는 %d살이고 이름은 '%s' 입니다.", age, name);

    return 0;
}