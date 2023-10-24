#include <stdio.h>

int main(){


    int a;
    while (a != -1){
        int b;
        a = b;
        printf("enter a value: ");
        scanf("%d", &b);
        if (b < -1 && b > 100){
            printf("%d is an invalid number", b);
        } else if (b >= 0 && b <= 100){
            printf("%d is a valid number\n", b);

        } else if (b == -1){
            printf("Termination value has been entered\n");
            break;
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