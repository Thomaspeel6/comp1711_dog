#include<stdio.h>

int main () 
{
    int n, factorial=1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (int i=1; i<=n;i++){ 
        factorial*=i; 
    }

    printf("Factorial is %d\n", factorial);






    return 0;
}

