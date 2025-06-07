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

#include <stdio.h>
#include <time.h>

int main() {
    time_t now;
    time(&now);
    struct tm *tm_now = localtime(&now);
    
    // Создаем структуру для 1 января следующего года
    struct tm new_year = *tm_now;
    new_year.tm_year += 1;
    new_year.tm_mon = 0;
    new_year.tm_mday = 1;
    new_year.tm_hour = 0;
    new_year.tm_min = 0;
    new_year.tm_sec = 0;
    
    time_t new_year_time = mktime(&new_year);
    double diff = difftime(new_year_time, now);
    int days_left = (int)(diff / (60 * 60 * 24));
    
    printf("До начала %d года осталось %d дней.\n", new_year.tm_year + 1900, days_left);
    return 0;
}

