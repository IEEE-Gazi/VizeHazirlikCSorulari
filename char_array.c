#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char string[50];
	int i, j, kucukKarakter, buyukKarakter, rakamSayisi, boslukSayisi;
	gets(string);
	for(i = 0; string[i] != '\0'; i++){
		if(string[i] >= 'a' && string[i] <= 'z')
			kucukKarakter++;
		if(string[i] >= 'A' && string[i] <= 'Z')
			buyukKarakter++;
		if(string[i] >= '0' && string[i] <= '9')
			rakamSayisi++;
		if(string[i] == ' ')
			boslukSayisi++;
	}
	
	printf("Kucuk Karakter Sayisi: %d\nBuyuk Karakter Sayisi: %d\nRakam Sayisi: %d\nBosluk Sayisi: %d", kucukKarakter, buyukKarakter, rakamSayisi, boslukSayisi);
	
	
	return 0;
}
