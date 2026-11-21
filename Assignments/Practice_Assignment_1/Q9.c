#include <stdio.h>
int main(void){

    float temp;
     printf("Enter Temperature in Celsius : ");
     scanf("%f", &temp);

     printf("Temperature in fahrenheit : %.2f", (temp*9/5)+32);



    return 0;
}