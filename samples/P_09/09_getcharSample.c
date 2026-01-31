#include <stdio.h>

/**
 * getchar() / putchar()  ==> Buffered I/O, 값이 저장된 메모리 값을 읽거나 출력
 * _getch() / _getche()  ==> Non-Buffered I/O, 키보드 입력 자체에 대한 감지
 */

int main (void) {
    char ch = 0;
    
    ch = getchar(); // <-- Input Buffer 에서 char 하나 꺼내와라 (buffer 는 queue 형태)
    putchar(ch);    // <-- Output Buffer 에 ch 변수 (메모리 값)을 write 하여라
    putchar('Z');   // <-- Output Buffer 에 'Z'를 write 하여라
    
    /**  
    * 1. (만약 입력에서 'A'를 입력했다면) process 종료 이후 Output Buffer 에 "AZ"가 쌓여있고
    * 2. 추상화된 장치 파일 인터페이스 -> kernel 수준 SW 장치 드라이버 -> 출력 하드웨어에서 이것을 출력..
    * 입력은 이것의 반대라고 생각하면 됨   
    */
    return 0; 
}