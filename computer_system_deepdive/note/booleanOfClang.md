## Boolean of C
- C는 true 값이나 false 값이 있는 부울 타입을 제공하지 않는다. 대신 조건문이 사용될 때 정숫값이 true인지 false인지 평가한다.
조건식이 사용되는 경우 정수식은 다음과 같다.
  - 0은 false로 평가된다.
  - 0이 아닌 수(음수나 양수)는 true로 평가된다.

- C에서 `논리 연산자`는 정수형 '부울'피연산자를 취하고 0(false)또는 0이 아닌 값(true)으로 평가한다.
`( 논리 연산 결과는 항상 0 또는 1이다..! )`

- C의 `단락`논리 연산자 평가는 결과를 아는 즉시 논리식 평가를 중지한다.
```text
ex. 첫 번째 피연산자 논리 곱(&&) 표현식에서 false로 평가되었다면 &&표현식은 반드시 false이기 때문에
    두 번째 피연산자의 값은 평가될 필요가 없고 평가되지 않는다.
```

### <더 알아보기>
- C99에서 _Bool 타입이 추가 되어 stdbool.h 헤더 파일을 추가하면 
  - `#include <stdbool.h>`
- (bool, true, false) 를 사용할 수 있게 된다.
```C
#include <stdio.h>
#include <stdbool.h>

int main (void) {
    bool flag = true;

    if(flag) {
        printf("yes \n");
    }
    return 0;
}
```
