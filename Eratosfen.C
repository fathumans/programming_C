#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int user_num = 1;
	
	printf("Type a number to search to: ");
	scanf("%d", &user_num);
	
	printf("\n");
	
	int i;
	for(i = 1; i <= user_num; i++) {
		
		int j;
		int count = 0;
		for(j = 1; j <= i; j++) {
			if(i % j == 0) count++;
		}
	
		if(count == 2) printf("%d is a simple number!\n", i);
	}
    
    return 0;
}
