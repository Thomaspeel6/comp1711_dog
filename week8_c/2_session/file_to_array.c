#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define rows 10
#define collumns 3




typedef struct{
    int procedualprogramming;
    int introtoPro;
    int operatingSystem;
} Student;

void tokenize(char *input, int *array, int size){
    char *inputCopy = strdup(input);

    char *token = strtok(inputCopy, ",");
    int i = 0;
    
    while(token != NULL && i < size){
        array[i++] = atoi(token);
        token = strtok(NULL, ",");
    }
    free(inputCopy);
}
void createArray(int data[rows][collumns], int *values, int Rows, int Collumns){
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < collumns; ++j) {
            data[i][j] = values[i * collumns + j];
        }
    }
}
int main(){
    FILE *file = fopen("marks.txt", "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    char line [100];
    fgets(line, sizeof(line), file);
    fclose(file);


    int values [rows * collumns];
    tokenize(line, values, rows *collumns);
    
    int data [rows][collumns];
    createArray(data, values, rows, collumns);

    printf("students marks are:\n");
    for (int i = 0; i < rows; i++){
        for(int j = 0; j < collumns; j++){
            printf("%d ", data[i][j]);
        }
        printf("\n");
    }

    return 0;
}