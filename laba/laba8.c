#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Объявление структуры humen
typedef struct {
    char name[50];       // Имя
    char surname[50];    // Фамилия
    int birthYear;       // Год рождения
    char gender[10];     // Пол (например, "male" или "female")
    float height;        // Рост (в метрах)
} humen;

// Функция для сравнения двух записей по заданным критериям
int compareHumen(const void *a, const void *b) {
    humen *humenA = (humen *)a;
    humen *humenB = (humen *)b;

    // Критерии сортировки (массив значений: 1 - год, 2 - имя, 3 - фамилия, 4 - пол, 5 - рост)
    static int criteria[5] = {0}; // Массив критериев сортировки

    for (int i = 0; i < 5 && criteria[i] != 0; i++) {
        switch (criteria[i]) {
            case 1: // Сортировка по году рождения
                if (humenA->birthYear != humenB->birthYear)
                    return humenA->birthYear - humenB->birthYear;
                break;
            case 2: // Сортировка по имени
                if (strcmp(humenA->name, humenB->name) != 0)
                    return strcmp(humenA->name, humenB->name);
                break;
            case 3: // Сортировка по фамилии
                if (strcmp(humenA->surname, humenB->surname) != 0)
                    return strcmp(humenA->surname, humenB->surname);
                break;
            case 4: // Сортировка по полу
                if (strcmp(humenA->gender, humenB->gender) != 0)
                    return strcmp(humenA->gender, humenB->gender);
                break;
            case 5: // Сортировка по росту
                if (humenA->height != humenB->height)
                    return (humenA->height > humenB->height) ? 1 : -1;
                break;
        }
    }

    return 0; // Если все критерии равны
}

// Функция для вывода массива
void printHumenArray(humen arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Имя: %s, Фамилия: %s, Год рождения: %d, Пол: %s, Рост: %.2f м\n",
               arr[i].name, arr[i].surname, arr[i].birthYear, arr[i].gender, arr[i].height);
    }
}

// Функция для чтения данных из файла
int readDataFromFile(const char *filename, humen arr[], int size) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Ошибка: не удалось открыть файл '%s'\n", filename);
        return 0; // Возвращаем 0, если файл не удалось открыть
    }

    for (int i = 0; i < size; i++) {
        if (fscanf(file, "%s %s %d %s %f", arr[i].name, arr[i].surname,
                   &arr[i].birthYear, arr[i].gender, &arr[i].height) != 5) {
            printf("Ошибка: некорректные данные в файле '%s'\n", filename);
            fclose(file);
            return 0; // Возвращаем 0, если данные некорректны
        }
    }

    fclose(file);
    return 1; // Возвращаем 1, если чтение прошло успешно
}

// Функция для получения критериев сортировки от пользователя
void getSortingCriteria(int criteria[], int maxCriteria) {
    printf("Укажите критерии сортировки (1 - год, 2 - имя, 3 - фамилия, 4 - пол, 5 - рост):\n");
    printf("Введите числа через пробел (например, '1 2' для сортировки сначала по году, затем по имени):\n");

    char input[100];
    fgets(input, sizeof(input), stdin); // Чтение строки с консоли

    char *token = strtok(input, " \n");
    int count = 0;

    while (token != NULL && count < maxCriteria) {
        criteria[count++] = atoi(token);
        token = strtok(NULL, " \n");
    }

    // Заполняем оставшиеся элементы массива нулями
    for (int i = count; i < maxCriteria; i++) {
        criteria[i] = 0;
    }
}

int main() {
    const char *filename = "input.txt"; // Имя файла с входными данными
    humen array[100];                  // Массив для хранения данных
    int size = 4;                      // Размер массива (можно изменить)

    // Чтение данных из файла
    if (!readDataFromFile(filename, array, size)) {
        return 1; // Завершаем программу, если произошла ошибка
    }

    // Получение критериев сортировки от пользователя
    int criteria[5] = {0};
    getSortingCriteria(criteria, 5);

    // Сортировка массива
    qsort(array, size, sizeof(humen), compareHumen);

    // Вывод отсортированного массива
    printf("\nОтсортированный массив:\n");
    printHumenArray(array, size);

    return 0;
}
