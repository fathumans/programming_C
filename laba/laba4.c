#include <stdio.h>
#include "Triangle.h"

int main(int argc, char *argv[])
{
	double a,b,c;

	printf("Vvedite dliny storoni 1: \n");
	scanf("%lf", &a);
	printf("Vvedite dliny storoni 2: \n");
	scanf("%lf", &b);
	printf("Vvedite dliny storoni 3: \n");
	scanf("%lf", &c);


	if (RealorFake(a,b,c)) {
        double CurS, CurP;
        
        CurP = Perimetr(a,b,c);
        CurS = Ploshad(a, b, c, CurP/2);
        
        
        printf("Perimetr triygolnika: %lf", CurP);
    	printf("\nS triygolnika: %lf", CurS);
	} else {
		printf("treygolnik ne syshestvyet");
	}


	return 0;
}
