#include <stdio.h>
#include <math.h>

int Perimetr(double a, double b,double c){
    return a + b + c;
};

int Ploshad(double a, double b, double c, double p){
    return sqrt(p*(p-a)*(p-b)*(p-c));
};

int main(int argc, char *argv[])
{
	double a,b,c;

	printf("Vvedite dliny storoni 1: \n");
	scanf("%lf", &a);
	printf("Vvedite dliny storoni 2: \n");
	scanf("%lf", &b);
	printf("Vvedite dliny storoni 3: \n");
	scanf("%lf", &c);


	if ((a < b+c) && (b <c+a) && (c < a+b)) {
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
