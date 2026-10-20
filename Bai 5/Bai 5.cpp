#include <stdio.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N < 2) {
        printf("Ko phai so nt");
    } 
	else {
        for (int i = 2; i <= sqrt(N); i++) {
            if (N % i == 0) {
                printf("Ko phai so nt");
                return 0;
            }
        }
        printf("Co la so nt");
    }
    return 0;
}
