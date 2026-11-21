#include <stdio.h>
int main(void){

    int price_of_item;
    int quantity;

    printf("Enter price of item : ");
    scanf("%d", &price_of_item);

    printf("Enter quantity : ");
    scanf("%d", &quantity);

    printf("Total Bill : %d", price_of_item * quantity);



    return 0;
}

