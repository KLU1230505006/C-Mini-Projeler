#include <stdio.h>

int asalKontrol(int sayi) {
    int i;
    for(i=2;i<sayi;i++){
    	if(sayi%i ==0 ){
    		return 0;
		}
	}
    return 1;
}

int main() {
    int sayi;

    // Kullanýcýdan bir sayý alýn
    printf("Asal olup olmadigini kontrol etmek icin bir sayi girin: ");
    scanf("%d", &sayi);

    // asalKontrol fonksiyonunu kullanarak sayýnýn asal olup olmadýðýný kontrol edin
    if (asalKontrol(sayi) == 1) {
        printf("%d bir asal sayidir.\n", sayi);
    } else {
        printf("%d bir asal sayi degildir.\n", sayi);
    }

    return 0;
}

