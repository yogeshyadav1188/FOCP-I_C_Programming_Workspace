#include <stdio.h>

int main() {
    // int i, j;

    // for (i = 1; i <= 4; i++) {
    //     for (j = 1; j <= 5; j++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    int n;
    int fact;
    fact = 1;
    printf("Enter Number : ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++){
        fact = fact*i;
        

    }
    printf("Factorial : %d ", fact);

    return 0;
}