#include <stdio.h>
int main(void){

    int subject_1,subject_2,subject_3,subject_4,subject_5;

    printf("Enter Marks of Subject 1 : ");
    scanf("%d", &subject_1);
    printf("Enter Marks of Subject 2 : ");
    scanf("%d", &subject_2);
    printf("Enter Marks of Subject 3 : ");
    scanf("%d", &subject_3);
    printf("Enter Marks of Subject 4 : ");
    scanf("%d", &subject_4);
    printf("Enter Marks of Subject 5 : ");
    scanf("%d", &subject_5);

    printf("Total Marks : %d\n", subject_1+subject_2+subject_3+subject_4+subject_5);

    printf("Percentage : %.2f%%\n ", (subject_1+subject_2+subject_3+subject_4+subject_5)/500.0 *100);





    return 0;
}
