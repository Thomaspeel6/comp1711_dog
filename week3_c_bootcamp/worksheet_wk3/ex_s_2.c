#include <stdio.h>

int main(){

    int temp;
    printf("insert temperature: ");
    scanf("%d", &temp);

    if (temp >= -10 && temp <= 40){
        printf("%d is a valid temperature\n", temp);
    } else {
        printf("%d is an invalid temperature\n", temp);
    };


    return 0;
}