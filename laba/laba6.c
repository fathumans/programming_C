#include <stdio.h>
#include <math.h>
#define Max_Name_Length 100

int main()
{
    FILE *f1 = fopen("in.txt", "r");
    FILE *f2 = fopen("out.txt", "w");
    
    char Familia[Max_Name_Length];
    char Imya[Max_Name_Length];
    char Otchevstvo[Max_Name_Length];
    int Year;
    
    while (fscanf(f1, "%s %s %s %d", Familia, Imya, Otchevstvo , &Year) == 4) {
        
        if (Year > 1980) fprintf(f2, "%s %s %s %d\n", Familia, Imya, Otchevstvo, Year);
 } 


    return 0;
}
