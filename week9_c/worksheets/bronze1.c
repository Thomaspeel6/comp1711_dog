#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char* string;
    printf("enter a string: ");
    scanf("%s", string);
    int* str_length;
    str_length = strlen(string);
    
    printf("%ls", str_length);
//    char* new_array = (char *) malloc (str_length string);


    return 0;
}