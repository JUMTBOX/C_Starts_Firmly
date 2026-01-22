#include <stdio.h>
#include <stdlib.h>

int main (void) {
    char ch = 0;
    /* 입력 버퍼에서 char 1개(=3번째 인수 1) 꺼내와서 ch 변수의 주소(메모리)에 저장하겠다.. */
    /*
    scanf_s("%c", &ch, 1);
    printf("입력한 문자는 %c 입니다. \n", ch);
    */
   
    /** 
     * 0a == \n 
     * 0d == \r 
     * */
   char szBuffer[4] = { 0 };
   scanf_s("%4c", szBuffer, _countof(szBuffer));
   printf("%c\n%c\n%c\n%c \n", szBuffer[0], szBuffer[1], szBuffer[2], szBuffer[3]);

   // 1. scanf 사용시 형식 문자 뒤에 \n을 넣으면 엔터로 입력이 끝나지 않음
   // 2. 형식문자 사이는 띄어쓰기가 없음
   return 0;
}