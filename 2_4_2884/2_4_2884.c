/** 알람을 45분 앞서는 시간으로 바꾸는 것이다.
첫째 줄에 두 정수 H와 M이 주어진다. (0 ≤ H ≤ 23, 0 ≤ M ≤ 59) 그리고 이것은 현재 상근이가 맞춰놓은 알람 시간 H시 M분을 의미한다.
입력 시간은 24시간 표현을 사용한다. 24시간 표현에서 하루의 시작은 0:0(자정)이고, 끝은 23:59(다음날 자정 1분 전)이다. 시간을 나타낼 때, 불필요한 0은 사용하지 않는다.
**/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    int hour, min;
    scanf("%d %d", &hour, &min);

    if (min >= 45) {
        min = min - 45;
    }
    else {
        min = min + 15;
        if (hour == 0) {
            hour = 23;
        }
        else {
            hour = hour - 1;
        }
    }

    printf("%d %d", hour, min);
    return 0;
}