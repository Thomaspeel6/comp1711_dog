#include <stdio.h>


int main(){

    int num;
    printf("Insert a number: ");
    scanf("%d", &num);
   

    if (num %4 == 0 && num %5 == 0){
        printf("%d is disvisble by 4 and 5 \n", num);
    } else {
        printf("%d is not divisible by 4 and 5 \n", num);
    }

    return 0;
}