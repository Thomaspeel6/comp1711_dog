#include <stdio.h>

float sum (float a, float b) //local varaibles, only work in this function 
{
    float answer;
    answer = a + b;
    return answer;
}

int main ()
{
    float x, y;
    printf("enter 2 numbers: ");
    scanf("%f %f", &x, &y);
    float z = sum(x,y);
    printf("answer is %.3f\n", z);
    return 0;
}