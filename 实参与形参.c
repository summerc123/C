#include <stdio.h>

// �������� - a��b���β�
int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 3;

    // �������� - x��y��ʵ��
    int result = add(x, y);

    printf("���: %d\n", result);
    return 0;
}