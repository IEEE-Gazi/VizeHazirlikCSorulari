#include <stdio.h>
#include <math.h>

int main() {
	
	// i: Satir sayisi
	// j: 1. degisken
	// k: 2. degisken
	
	int i, j, k, n, rows, kmax;
	char e;
	
	do{
		scanf("%d", &n);
	
		rows = ceil(n / 5.0);
		
		for(i = 0; i < rows; i++){
			
			for(j = 1; j <= 10; j++){
				
				k = i * 5 + 1;
				
				if(i == rows - 1 && n % 5)
					kmax = k + n % 5;
				else
					kmax = k + 5;
				
				for(; k < kmax;k++){
					printf("%2dx%2d=%3d    ", j, k, j * k);
				}
				printf("\n");
			}
			printf("\n\n");
		}
		printf("Tekrar icin 'E' ye basiniz: ");
		scanf(" %c", &e);
		
	}while(e == 'E');
	
	return 0;
}
