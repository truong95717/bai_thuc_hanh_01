#include <stdio.h>

int main() {
    int n, i;
    printf("So phan tu: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    int max = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i]; 
        }
    }
    printf("So lon nhat trong mang la: %d", max);
    return 0;
}
