#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void printArray(int a[][ 3] ){
   
   for (size_t i = 0; i <= 1; ++i) {
     for (size_t j = 0; j <= 1; ++j){
        printf("%d ", a[i][j]);
     }
     printf("\n"); // start new line of output 
     }
}


void printColumn(int a[][3], int colIndex, int rows, char when) {
    switch (when) {
        case 'B':
            printf("Values in column %d before change:\n", colIndex); break;

        case 'A':
            printf("Values in column %d after change:\n", colIndex); break;

        default: 
            printf("Invalid option\n");
            return;
    }

    for (int i = 0; i < rows; ++i) {
        printf("%d\n", a[i][colIndex]);
    }
}





