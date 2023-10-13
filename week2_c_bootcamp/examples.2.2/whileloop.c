#include <stdio.h>

int main() {
    
    int a = 6;
    
    while(5 < a < 100)
    { 
        printf("a is equal to %d\n", a);
        a++;
    }
    printf("I've finished the for loop anda is equal to %d\n", a);

    return(0);
}