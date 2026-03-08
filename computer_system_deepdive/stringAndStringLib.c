#include <stdio.h>
#include <string.h>

int main (void) {
    char str1[10];
    char str2[10];
    int len;

    str1[0] = 'h';
    str1[1] = 'i';
    str1[2] = '\0';

    len = strlen(str1);

    printf("str1= %s, len= %d\n", str1, len);

    /* str1의 내용을 str2에 복사 */
    strcpy(str2, str1);
    printf("str2= %s\n", str2);

    /* 문자열 "hello"를 str2에 복사 */
    strcpy(str2, "hello");
    len = strlen(str2);

    printf("str2= %s, len= %d\n", str2, len);

    return 0;
}