#include<stdio.h>


int main () 
{
    double var1, var2;
    printf("insert 2 numbers: ");
    scanf("%lf %lf", &var1, &var2);
    double var3;
    var3 = var1 * var2;

    printf("the area of the rectangle is %f\n", var3);
    return 0;
}