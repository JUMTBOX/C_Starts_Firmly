#include <stdio.h>
#include <stdlib.h>

int main (void) {
    char szBufferRight[32] = {0};
    char szBufferLeft[32] = {0};

    scanf_s("%s%s", 
        szBufferLeft, 
        (unsigned)_countof(szBufferLeft),
        szBufferRight, 
        (unsigned)_countof(szBufferRight) 
    );

    printf("left result >>> %s\nright result >>> %s", szBufferLeft, szBufferRight);
    
    return 0;
}