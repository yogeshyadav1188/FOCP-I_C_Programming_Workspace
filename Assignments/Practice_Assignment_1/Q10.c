#include <stdio.h>
int main(void){

    int product_id;
    float product_price;
    int quantity;
    float discount_percentage;
    float subtotal;
    float discount_amount;
    float final_amount;
    
    printf("Enter Product Id : ");
    scanf("%d", &product_id);
    printf("Enter Product Price : ");
    scanf("%f", &product_price);
    printf("Enter Quantity : ");
    scanf("%d", &quantity);
    printf("Enter Discount Percentage : ");
    scanf("%f", &discount_percentage);  
    
    subtotal = product_price*quantity;

    printf("Subtotal : %.2f\n", subtotal);

    discount_amount = subtotal*discount_percentage/100;

     printf("Discount Amount : %.2f\n", discount_amount);
     final_amount = subtotal-discount_amount;
    
    printf("Final Amount : %.2f\n", final_amount);
    



    return 0;
}