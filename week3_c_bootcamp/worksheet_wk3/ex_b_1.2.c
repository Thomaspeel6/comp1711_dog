#include <stdio.h>

float calc (float a){

    float answer;
    answer = 3.14 * a * a;
    return answer;    
}


int main(){

    float x;
    printf("enter radius: ");
    scanf("%f", &x);
    float z = calc(x);

    printf("The area is %.2f\n", z);
    return 0;
}