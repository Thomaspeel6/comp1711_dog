#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define an appropriate struct
typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

// Define any additional variables here



// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

}

// Complete the main function
int main() {
    char filename[250]; //Limiting file name to 250 characters

    printf("Enter file name: ");
    scanf("%250s", filename); //still limiting file name to 250 charcters

    FILE* Stepcounter = fopen(filename, "r");

   
    if (Stepcounter == NULL)
        printf("Invalid file\n");
    else
        printf("file was found\n");
    
    printf("%s", Stepcounter);
/*
    for (i  Stepcounter):
        tokeniseRecord(Stepcounter, ",", date, time, steps);

    printf("%d", date);
*/
    return 0;

}