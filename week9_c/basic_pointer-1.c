#include <stdio.h>

int main()
{
    int var=10; //value 10 is stored to var

    int* var_address=&var; //& == address of .. // * makes it a pointer 

    printf("\n");
    printf("The content of \"var\" = %d\n",var);

    printf ("The content \"var_address\" = %p\n", var_address);

    printf ("Now the magic ! Content of \"*var_address\" = %d\n", *var_address); // .. = %c\n", *((char*)var_address);
    
    printf("\n");

    return 0;
}