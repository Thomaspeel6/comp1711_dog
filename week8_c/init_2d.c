#include <stdio.h>



int columns(){
    int n;
    printf("how many columns do you want: \n");
    scanf("%d", &n);
    return n;

}
void printArray(int a[][ 3] ){
   
   for (size_t i = 0; i <= 1; ++i) {
     for (size_t j = 0; j <= 1; ++j){
        printf("%d ", a[i][j]);
     }
     printf("\n"); // start new line of output 
     }
}

int main() {
    int b;
    b = columns();
    int array1[2][b] = {{1, 2, 3}, {4, 6}, {5, 3, 3}};
    printf("Values in array1 by row are:\n");
    printArray(array1);

    
    return 0;
}
