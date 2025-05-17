#include <stdio.h>
#include "stats.h"

int main() {
    printf("Сумма: %d\n", sum(5, 2, 5, 1, 8, 4));
    printf("Максим: %d\n", max(4, 9, 3, 7, 5));
    printf("Минимал: %d\n", min(3, -5, 2, 8));
    printf("Ср. знач: %.2f\n", average(4, 10, 20, 30, 40));
    
    return 0;
}
