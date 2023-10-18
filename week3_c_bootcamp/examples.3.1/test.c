#include <stdio.h>


int main(){

    int mark;
    printf("What was ur test mark: ");
    scanf("%d", &mark);

    if (mark >= 0 && mark <= 100){
        printf("%d is a pass\n", mark);
    }else if (mark >= 0 && mark < 40){
        printf("%d is a fail \n", mark);
    }else {
        printf("%d is not a valid mark \n", mark);
    }
    return 0;
}