/** �˶��� 45�� �ռ��� �ð����� �ٲٴ� ���̴�.
ù° �ٿ� �� ���� H�� M�� �־�����. (0 �� H �� 23, 0 �� M �� 59) �׸��� �̰��� ���� ����̰� ������� �˶� �ð� H�� M���� �ǹ��Ѵ�.
�Է� �ð��� 24�ð� ǥ���� ����Ѵ�. 24�ð� ǥ������ �Ϸ��� ������ 0:0(����)�̰�, ���� 23:59(������ ���� 1�� ��)�̴�. �ð��� ��Ÿ�� ��, ���ʿ��� 0�� ������� �ʴ´�.
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