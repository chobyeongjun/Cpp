#include <stdio.h>

int main(void)
{
    int age;
    printf("나이를 입력하세요: ");

    //
    // scanf 함수를 사용하여 사용자로부터 입력을 받습니다.
    scanf("%d", &age);  // %d는 정수형 입력을 의미하며, &age는 age 변수의 주소를 전달합니다.

    if (age >= 20)
    {
        printf("성인이시군요! 입장을 환영합니다.\n");
    }
    else if (age >= 14)
    {
        printf("청소년이시군요.\n");
    }
    else
    {
        printf("어린이시군요. 조금 더 커서 오세요. :)\n");
    }
    printf("%d\n", age);

    return 0;
}