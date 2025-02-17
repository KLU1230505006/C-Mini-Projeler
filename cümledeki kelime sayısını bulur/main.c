#include <stdio.h>
#include <string.h>

int kelimeSayisi(char cumle[]) {
    
    int i,sayac=1;
    int uzunluk=strlen(cumle);
    for(i=0;i<uzunluk;i++){
    	if(cumle[i]==' '){
    		sayac++;
		}
    	
	}
    return sayac;
}
int main() {
    char cumle[200];

    // Kullanýcýdan cümleyi alýn
    printf("Bir cumle girin: ");
    gets(cumle);

    // kelimeSayisi fonksiyonunu kullanarak kelime sayýsýný bulun
    int sayi = kelimeSayisi(cumle);

    // Bulunan sayýyý ekrana yazdýrýn
    printf("Cumledeki kelime sayisi: %d\n", sayi);

    return 0;
}

