#include <stdio.h>
int main(void){

    int Basic_salary,Allowance,Bonus;

    printf("Enter Basic salary : ");
    scanf("%d", &Basic_salary);
    printf("Enter Allowance : ");
    scanf("%d", &Allowance);
    printf("Enter Bonus : ");
    scanf("%d", &Bonus);

    printf("Final Salary : %.2f", (Basic_salary+Allowance+Bonus)/1.0);




    return 0;
}