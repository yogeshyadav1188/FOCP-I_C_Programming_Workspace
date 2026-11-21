#include<stdio.h>
// float toFahernheit(float c){
//     float z= (c * 1.8) + 32;
//     return z;
// }

// int main(){
//     float c;
//     float f;
//     printf(" temp: ");
//     scanf("%f", &c);
//     f = toFahernheit(c);
//     printf("%f", f);



//     return 0;
// }

void printpattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}

int main(){

    printpattern(10);
    return 0;
}