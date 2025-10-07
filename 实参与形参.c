#include <stdio.h>

// 函数定义 - a和b是形参
int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 3;

    // 函数调用 - x和y是实参
    int result = add(x, y);

    printf("结果: %d\n", result);
    return 0;
}