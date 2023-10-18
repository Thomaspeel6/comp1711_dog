#include <stdio.h> 

int main(){
    float temperature;
    printf("wha's the temperature today? ");
    scanf("%f", &temperature);

    float threshold = 15;

    if (temperature > threshold)
        printf("Don't wear a jacket \n");
    else if (temperature > 10)
        printf("wear light jacket\n");
    else 
        printf("wear a jacket\n");


    return 0;
}