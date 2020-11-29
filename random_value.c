#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	int degisken[5], i, j;
	
	srand(time(NULL));
	
	for(i = 0; i < 5; i++){
		degisken[i] = rand() % 100;
	}
	for(j = 0; j < 5; j++){
		printf("%d ", degisken[j]);
	}
	return 0;
}
