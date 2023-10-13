#include<stdio.h>
#include<string.h>  

int main () { 

    char string [20];
    printf("insert a string: ");
    scanf("%s", string);
    printf ("After the reverse of a string: %s \n", strrev(string));  

    return 0;



}