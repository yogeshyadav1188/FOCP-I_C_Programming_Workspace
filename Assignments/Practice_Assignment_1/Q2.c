#include <stdio.h>
int main(void){

    int Age;
    float Height;
    char Grade;
    
    printf("Enter Age : ");
    scanf("%d", &Age);

    printf("Enter Height(in meters) : ");
    scanf("%f", &Height);

    printf("Enter Grade : ");
    scanf(" %c", &Grade);

    printf("Age : %d\n", Age);
    printf("Height(in meters) : %.2f\n", Height);
    printf("Grade : %c\n", Grade);




    return 0;
}