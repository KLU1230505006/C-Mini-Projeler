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

    // Kullan�c�dan c�mleyi al�n
    printf("Bir cumle girin: ");
    gets(cumle);

    // kelimeSayisi fonksiyonunu kullanarak kelime say�s�n� bulun
    int sayi = kelimeSayisi(cumle);

    // Bulunan say�y� ekrana yazd�r�n
    printf("Cumledeki kelime sayisi: %d\n", sayi);

    return 0;
}

