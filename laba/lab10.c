#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX(a,b) ( (a > b) ? (a) : (b) )
#define AVERAGE(num, n) ( num / n )

int main(int argc, char *argv[]) {
	
	char stroka[64];
	
	char *istr;
	char sep[10] = ",";
	
	int count = 0;
    double summ =0;
	double current_max = 0;
	
	while(1) {
		printf("vvedite chislas: ");
		fgets(stroka, 64, stdin);
		
		istr = strtok(stroka, sep);
		while(istr != NULL) {
			current_max = MAX(current_max, atoi(istr));
			istr = strtok(NULL, sep);
			
			summ+=atoi(istr);
			count++;
		}
		
		printf("Numbers in the list: %d\n", count);
		
		printf("- Maximum: %lf\n", current_max);
		printf("avg: %lf\n", AVERAGE(summ, count));
		
		current_max = 0;
		count = 0;
	}
	
	return 0;
}
