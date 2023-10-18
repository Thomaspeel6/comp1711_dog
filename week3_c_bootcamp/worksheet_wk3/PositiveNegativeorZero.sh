#include <stdio.h>

int main () {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0){
        printf("%d is a positive number \n", num);
    } else if (num < 0){
        printf("%d is a negative number \n ", num);
    } else {
        printf("%d is the number 0 \n ", num);
    }





    return 0;
}