#include <stdio.h>
int main(void){

    int x,y;

    printf("Enter x : ");
    scanf("%d", &x);
    printf("Enter y : ");
    scanf("%d", &y);

    printf("___Before Swapping___\n");
    printf("%d %d\n", x,y);

    x = x+y;
    y = x-y;
    x = x-y;

    printf("___After Swapping___\n");
    printf("%d %d", x,y);





    return 0;
}