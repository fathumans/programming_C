#include <stdio.h>
#include <string.h>
#define FILENAME "data.txt"


typedef struct {
    char name[50];
    char surname[50];
    int birthYear;
} humen;


void sortByBirthYear(humen arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j].birthYear > arr[j + 1].birthYear) {
                humen temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    humen array1[4];
    humen array2[4];

    
    FILE *file = fopen(FILENAME, "r");
    

    for (int i = 0; i < 4; i++) {
        if (fscanf(file, "%s %s %d", array1[i].name, array1[i].surname, &array1[i].birthYear) !=3) {
            return 1;
        }
    }
   
    sortByBirthYear(array1, 4);

    for (int i = 0; i < 4; i++) {
        array2[i] = array1[i];
    }

    printf("\nОтсортированный список людей по годам рождения:\n");
    for (int i = 0; i < 4; i++) {
        printf("Имя: %s, Фамилия: %s, Год рождения: %d\n",
               array2[i].name,
               array2[i].surname,
               array2[i].birthYear);
    }

    return 0;
}
