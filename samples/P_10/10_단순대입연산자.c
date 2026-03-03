#include <stdio.h>

int main(void) {
   int x = 0, nInput = 0;
   scanf_s("%d", &nInput);

   x = nInput;
   printf("%d\n", x);

   char szBuffer[32] = { 0 };
   // 배열의 이름은 '주소상수'다. 변수가 아님..!
   // szBuffer = 'A';

   return 0;
}