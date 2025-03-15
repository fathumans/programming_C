#include <stdio.h>

int main()
{
	char a[81];

	printf("Vvedite stroky simvolov dlini do 80:\n");
	scanf("%s", &a);

	for (int i = 0; i<81; i++) {
	    if (a[i] == '!') a[i] = '.';
		if (a[i] == 'a') a[i] = 'A';
		if (a[i] == 'b') a[i] = 'B';
	}
	
    printf("Vi vveli: %s \n", a);
	return 0;
}
