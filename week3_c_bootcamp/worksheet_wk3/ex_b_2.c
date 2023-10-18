#include <stdio.h>


int main(){

    int num;
    printf("Insert a number: ");
    scanf("%d", &num);
    // float num_4;
    // num_4 = num / 4;
    // float num_5;
    // num_5 = num / 5;

    if (num %4 == 0 && num %5 == 0){
        printf("%d is disvisble by 4 and 5 \n", num);
    } else {
        printf("%d is not divisible by 4 and 5 \n", num);
    }

    // printf("%f\n", num_4);
    // printf("%f\n", num_5);


    return 0;
}