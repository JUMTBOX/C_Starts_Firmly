#include <stdio.h>

int main (void) {
    char szName[32] = {0}; 
    printf("이름을 입력하세요: ");
    gets(szName);  // gets_s(szName, sizeof(szBuffer)); 사용이 권장(필)됨

    printf("당신의 이름은 "); // 개행을 하지 않는다
    puts(szName); // 반면 puts는 개행된다 여기서 szName parameter 타입은 char* (char 포인터)
    puts("입니다.");
}