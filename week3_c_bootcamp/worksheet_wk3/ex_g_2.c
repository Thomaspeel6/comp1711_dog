#include <stdio.h>

int main(){


    int a;
    while (a != -1){
        printf("enter a value: ");
        scanf("%d", &a);
        if (a < -1 && a > 100){
            printf("%d is an invalid number", a);
        } else if (a >= 0 && a <= 100){
            printf("%d is a valid number\n", a);

        } else if (a == -1){
            printf("Termination value has been entered\n");
        }

    }



    return 0;
}

/*


if (a >= 0 && a <= 100){
            printf("%d is a valid number\n", a);

if (a < -1 && a > 100){
            printf("%d is an invalid number", a);

            */