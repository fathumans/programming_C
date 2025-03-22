#include <stdio.h>
#include <math.h>


int main()
{
    char operacia
    int n;
    printf("Vvedite razmer matrici: \n");
    scanf("%d", &n);
    
    double Matrix1[n][n], Matrix2[n][n];
    
    for (int x = 0; x<n; x++){
        for (int y=0; y<n; y++){
            printf("Введите элемент [%d] [%d]: ",x,y);
            scanf("%lf", &Matrix1[x][y]);
        }
    }    
    for (int x = 0; x<n; x++){
        for (int y=0; y<n; y++){
            printf("Введите элемент [%d] [%d]: ",x,y);
            scanf("%lf", &Matrix2[x][y]);
        }
    }
    
    printf("Vvedite znak operacii (+ - *):")
    scanf("%c", &operacia)
    
    
    
    
    
    return 0;
}
