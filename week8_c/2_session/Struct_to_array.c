#include <stdio.h>
#define num_mods 3
#define num_stud 4

typedef struct{
    char name[50];
    int id;
    float GPA;
    int procedualprogramming;
    int introtoPro;
    int operatingSystem;
} Student;


void extractDataAndstore(Student students[], int extractedData[][num_mods]){
    for (int i = 0;  i < num_stud; ++i){
        extractedData[i][0] = students[i].procedualprogramming;
        extractedData[i][1] = students[i].introtoPro;
        extractedData[i][2] = students[i].operatingSystem;
    }
}


int main(){

    Student students[num_stud] = {
       {"Alex Turner", 2306456, 3.5, 78, 82, 89},
       {"Bob Williams", 2385679, 3.9, 100, 85, 92},
       {"Sophia Mendes", 2374068, 3.7, 93, 90, 87},
       {"Laura Cerroni", 2398452, 3.2, 65, 70, 80}
    };
    
    int extractedData[num_stud][num_mods];
    extractDataAndstore(students, extractedData);
    printf("Extracted Data:\n");
    for(int i = 0; i < num_stud; i++){
        printf("Student %d %d %d %d\n", i + 1, extractedData[i][0], extractedData[i][1], extractedData[i][2]);
    }
    return 0;
}