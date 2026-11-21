#include <stdio.h>
int main(void){

    int x;
    int y;
    int z;

    printf("enter x : ");
    scanf("%d" , &x);

    printf("enter y : ");
    scanf("%d", &y);

    printf("enter z : ", &z);
    scanf("%d", &z);

    printf("Average : %.2f", (x+y+z) /3.0);




    return 0;
}