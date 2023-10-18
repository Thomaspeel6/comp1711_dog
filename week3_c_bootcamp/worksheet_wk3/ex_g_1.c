#include <stdio.h>

int main(){

    printf("\n1. Checking if number is postive or negative\n");
    printf("2. checking if number is Divisible by 4 and 5\n");
    printf("3. Grade Checker with Distinction\n");
    printf("4. Get told your smart\n");
    printf("5. Get told your good looking\n");
    
    int choice;
    printf("\nPlease select a menu option: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:{
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
            break;
        }
        case 2:{

            int num;
                printf("Insert a number: ");
                scanf("%d", &num);
   
            if (num %4 == 0 && num %5 == 0){
                printf("%d is disvisble by 4 and 5 \n", num);
            } else {
                printf("%d is not divisible by 4 and 5 \n", num);
            }
            break;}
        case 3:{
            int mark;
                printf("Enter your mark: ");
                scanf("%d", &mark);

            if (mark >= 70 && mark <= 100){
                printf("%d is a distinction\n", mark);
            }else if (mark >= 50 && mark <= 100){
                printf("%d is a pass\n", mark);
            }else if (mark >= 0 && mark < 50){
                printf("%d is a fail\n", mark);
            } else{
                printf("%d is an invalid mark\n", mark);
            }   
            break;}
        case 4:
           printf("\nYour smart\n");
           break;
        case 5:
            printf("\nYour good looking\n");
            break;
        default:
            printf("\nInavlid selection. \n");
    }

    return 0;
}