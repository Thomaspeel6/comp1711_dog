#include <stdio.h>

int main(){

    int mark;
    printf("Enter your mark; ");
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




    return 0;
}