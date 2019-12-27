//두 번째로 큰 정수를 출력한다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    int a, b, c;
    scanf ("%d %d %d", &a, &b, &c);

    if(a > b) {
        if(b > c) {
            printf("%d", b);
        } else {
            if(a > c) {
                printf("%d", c);
            } else {
                printf("%d", a);
            }
        }
    } else {
        if(a > c) {
           printf("%d", a);
       } else {
           if(b < c) {
               printf("%d", b);
            } else {
               printf("%d", c);
            }
        }
    }
    return 0;
}