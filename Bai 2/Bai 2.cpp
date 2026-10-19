#include <stdio.h>

int main() {
    int n, i;
    int count = 1; 
    scanf("%d", &n);

    if (n < 2) {
        count = 0;
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                count = 0; 0
                break;    
            }
        }
    }
    if (count == 1) {
        printf("%d la so nguyen to", n);
    } else {
        printf("%d khong phai la so nguyen to", n);
    }
    return 0;
}
