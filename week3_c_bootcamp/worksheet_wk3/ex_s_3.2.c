#include <stdio.h>

int str_len(char *str){
    int a = 0;
    while (str[a] != '/'){
        a++;
    }
    return a;
}

int main (){
    char string[100] = "";
    printf("Enter a string: ");
    scanf("%s", string);

    printf("length of string %d\n", str_len(string));

    return 0;
}


