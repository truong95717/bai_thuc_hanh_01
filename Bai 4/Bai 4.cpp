#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    int x = a;
    int y = b;
    while (y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }
    int bscnn = (a * b) / x;
    printf("Boi so chung nho nhat cua %d va %d la: %d", a, b, bscnn);
    return 0;
}
