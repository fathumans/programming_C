#include <stdio.h>
#include <math.h>


int main(int argc, char *argv[]) {
    int n, Matrix[n][n];
    printf("Введите числа для матрицы\n");
    for (int x = 0; x<2; x++){
        for (int y=0; y<2; y++){
            printf("Введите элемент [%d] [%d]: ",x,y);
            scanf("%df", &Matrix[x][y]);
        }
    }
	
	printf("\nДанный Массив:\n");
	for (int x = 0; x < 3; x++){
		for (int y = 0; y < 3; y++){
			printf("%d ", Matrix[x][y]);
		}
		printf("\n");
	}
	
	return 0;
}
