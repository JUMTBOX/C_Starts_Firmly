## Stack and StackFrame
- `실행 스택(execution stack)`은 프로그램에서 활성 함수의 상태를 추적한다.
- 각 함수 호출은 매개변수와 지역 변숫값을 포함하는 새로운 `스택 프레임`(`활성화 프레임` 또는 `활성화 레코드`라고 한다.)을 생성한다.
- 스택 맨 위에 있는 프레임은 활성 프레임이다.
- 현재 실행 중인 함수 활성화를 나타내며 범위에는 지역 변수와 매개변수만 있다.
- 함수가 호출되면 새로운 스택 프레임이 생성 되고(스택 맨위로 `밀림 pushed`), 지역 변수와 매개변수를 위한 공간이 새 프레임에 할당된다.
- 함수가 반환되면 스택 프레임이 스택에서 제거된다(스택 맨 위에서 `튀어나감 popped`), 호출자의 스택 프레임은 스택의 맨 위에 남는다.

```C
/* 함수 프로토타입의 예시 */
#include <stdio.h>

// 함수를 위한 타입 정보만 선언한다.(함수명, 반환 타입, 매개변수 목록)
int max(int n1, int n2);
// 다른 함수의 프로토타입, 함수의 반환 타입은 void로, 값을 반환하지 않는다는 의미
void print_table(int start, int stop);

int main () {
    int x, y, larger;
    
    printf("This program will operate over two int values.\n");
    
    printf("Enter the first value: ");
    scanf("%d", &x);
    
    printf("Enter the second value: ");
    scanf("%d", &y);
    
    larger = max(x, y);
    
    printf("The larger of %d and %d is %d\n", x, y, larger);
    
    print_table(x, larger);
    
    return 0;
}

... 하략 => max 함수와 print_table 함수 본문 정의..    
```