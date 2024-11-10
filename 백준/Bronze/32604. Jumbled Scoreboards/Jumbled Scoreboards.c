#include <stdio.h>  

int main() {
    int n;
    scanf("%d", &n);

    int A, B;
    scanf("%d %d", &A, &B);  
    for (int i = 2; i <= n; ++i) {
        int a, b;
        scanf("%d %d", &a, &b);

        if (A > a || B > b) { 
            printf("no");
            return 0;
        }
        A = a;
        B = b;
    }
    printf("yes");
}