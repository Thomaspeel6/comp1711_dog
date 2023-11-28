#include <stdio.h>

int main()
{
    int vector[5] = {1,2,3,4,5}; // vector [0] is the address of where 1 is 
    // it has to know where to start 
    // address adn the type of data that is stored 

    int* address;

    address = vector; //copying vetor to address, 

    printf("\n \n address = %p\n", address);

    printf( " vector = %p\n\n",vector);

    printf ("address[0] = %d  ,  vector[0] = %d  \n\n",address[0 ],vector[0]);

}