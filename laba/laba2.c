#include <stdio.h>
#include <math.h>


int main(int argc, char *argv[]) {
    double Matrix[3][3];
    printf("Введите числа для матрицы\n");
    for (int x = 0; x<3; x++){
        for (int y=0; y<3; y++){
            printf("Введите элемент [%d] [%d]: ",x,y);
            scanf("%lf", &Matrix[x][y]);
        }
    }
	
	printf("\nДанный Массив:\n");
	for (int x = 0; x < 3; x++){
		for (int y = 0; y < 3; y++){
			printf("%.2lf ", Matrix[x][y]);
		}
		printf("\n");
	} 
	
	double main, second;
	main = second = 0;
	
	for (int i = 0; i < 3; i++){
		main += Matrix[i][i];
		second += Matrix[i][2-i];
		
	}
	printf("Сумма элементов главной диагонали: %.2lf\n", main);
	printf("Сумма элементов побочной диагонали: %.2lf\n", second);
	
	
	
	return 0;
}
