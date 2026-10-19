#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("PT vo so nghiem");
            } else {
                printf("PT vo nghiem");
            }
        } else {
            float x = -c / b;
            printf("PT co 1 nghiem: x = %.2f", x);
        }
    } 
    else {
        float delta = b * b - 4 * a * c;
        if (delta < 0) {
            printf("PT vo nghiem");
        } 
        else if (delta == 0) {
            float x = -b / (2 * a);
            printf("PT co nghiem kep: x = %.2f", x);
        } 
        else {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("PT co 2 nghiem phan biet:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f", x2);
        }
    }
    return 0;
}
