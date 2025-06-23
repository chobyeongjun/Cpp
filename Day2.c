#include <stdio.h>

int main(void)
{
    // 1. 변수를 만들면서 바로 값 넣기 (선언과 초기화)
    int my_age = 25;
    double height = 175.5;
    char initial = 'J';

    // 2. printf 안에서 서식 지정자를 이용해 변수 값 출력하기
    // "" 뒤에 콤마(,)를 찍고 순서대로 변수 이름을 적어줍니다.
    printf("제 나이는 %d살 입니다.\n", my_age);
    printf("제 키는 %lfcm 입니다.\n", height);
    printf("제 이름의 이니셜은 %c 입니다.\n", initial);

    // 3. 변수의 값은 언제든지 바꿀 수 있습니다.
    my_age = my_age + 1; // 1년이 지났다!
    printf("1년 뒤 제 나이는 %d살 입니다.\n", my_age);

    return 0;
}