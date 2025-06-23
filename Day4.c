#include <stdio.h>

int main(void){
    int j;
    // scanf 함수는 사용자로부터 입력을 받을 때 사용합니다.
    printf("출력할 구구단의 단을 입력하세요: ");
    scanf("%d", &j);
    printf("구구단 %d단을 출력합니다.\n", j);

    for (int i=1; i<10; i++) {
        // printf 함수는 출력할 때 사용합니다.
        // %d는 정수형 변수를 출력할 때 사용합니다.
        printf("%d x %d = %d\n", j, i, j*i);

    }
}