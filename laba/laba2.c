printf("\nДанный Массив:\n");
	for (int x = 0; x < 3; x++){
		for (int y = 0; y < 3; y++){
			printf("%.2lf ", Console_Matrix[x][y]);
		}
		printf("\n");
	} 
	
	double main, second;
	main = second = 0;
	
	for (int i = 0; i < 3; i++){
		main += Console_Matrix[i][i];
		second += Console_Matrix[i][2-i];
		
	}
	printf("Сумма элементов главной диагонали: %.2lf\n", main);
	printf("Сумма элементов побочной диагонали: %.2lf\n", second);
	
