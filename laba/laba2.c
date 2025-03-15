#include <stdio.h>
#include <math.h>


int main(int argc, char *argv[]) {
    
    int n;
    printf("Vvedite razmer matrici: \n");
    scanf("%d", &n);

    double Matrix[n][n];
    printf("Введите числа для матрицы\n");
    for (int x = 0; x<n; x++){
        for (int y=0; y<n; y++){
            printf("Введите элемент [%d] [%d]: ",x,y);
            scanf("%lf", &Matrix[x][y]);
        }
    }
	
	printf("\nДанный Массив:\n");
	for (int x = 0; x < n; x++){
		for (int y = 0; y < n; y++){
			printf("%.2lf ", Matrix[x][y]);
		}
		printf("\n");
	} 
	
	double main, second;
	main = second = 0;
	
	for (int i = 0; i < n; i++){
		main += Matrix[i][i];
		second += Matrix[i][(n-1)-i];
		
	}
	printf("Сумма элементов главной диагонали: %.2lf\n", main);
	printf("Сумма элементов побочной диагонали: %.2lf\n", second);
	
	
	
	return 0;
}
