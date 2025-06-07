#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
int main(int argc, char *argv[])
{
    clock_t start = clock();
    FILE *f1 = fopen("date.txt", "r");
    int Year;
    int Month;
    int Day;
    
    struct tm tm1 = { 0 };
    struct tm tm2 = { 0 };

    tm1.tm_year = 2025 - 1900;
    tm1.tm_mon = 6 - 1;
    tm1.tm_mday = 7;
    tm1.tm_hour = tm1.tm_min = tm1.tm_sec = 0;

    while (fscanf(f1, "%d %d %d", &Day, &Month, &Year) == 3) {
        tm2.tm_year = Year - 1900;
        tm2.tm_mon = Month - 1;
        tm2.tm_mday = Day;
        tm2.tm_hour = tm2.tm_min = tm2.tm_sec = 0;
    } 
    

    time_t t1 = mktime(&tm1);
    time_t t2 = mktime(&tm2);

    double dates = difftime(t2, t1);
    int days = round(dates / 86400);

    printf("dif: %d days\n", days);
    
    clock_t end = clock();
    double time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("took %f seconds \n", time_used);
}  
    
// 2 zadanie   
    
//     FILE *f2 = fopen("input.txt", "w");
    
//     int random;
//     int n = 2;
	
// 	while(1) {
// 		printf("\nType the length of 'n': ");
// 		scanf("%d", &n);
		
// 		if(n < 1) n = 1;
		
// 		double **M1, **M2, **M;
// 		M1 = (double**)malloc(n*sizeof(double*));
// 		M2 = (double**)malloc(n*sizeof(double*));
		
// 		for(int i = 0; i < n; i++) {
// 			M1[i] = (double*)malloc(n*sizeof(double));
// 			M2[i] = (double*)malloc(n*sizeof(double));
// 		}
		
// 		for(int i = 0; i < n; i++) {
// 		    for(int j = 0; j < n; j++) {
// 		    	random = rand()%10;
// 		    }
// 		}
		
// 		for(int i = 0; i < n; i++) {
// 		    for(int j = 0; j < n; j++) {
// 		    	random = rand()%10;
// 		    }
// 		}
	
// 	    free(M1);
// 		free(M2);
// 	}
// }

// void MatrixToFile(FILE *f2, int matrix[n][n], const char *matrixName) {
//     fprintf(f2, "%s:\n", matrixName);
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             fprintf(file, "%d ", M1[i][j]);
//         }
//         fprintf(f2, "\n");
//     }
//     fprintf(file, "\n");
// }
