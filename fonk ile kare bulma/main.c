#include <stdio.h>

int kareHesapla(int sayi) {
	int kare;
    kare=sayi*sayi;
    return kare;
}

int main() {
    int sayi;

    // Kullanıcıdan bir sayı alın
    printf("Karesini hesaplamak icin bir sayi girin: ");
    scanf("%d", &sayi);

    // kareHesapla fonksiyonunu kullanarak sayının karesini hesaplayın
    int kare = kareHesapla(sayi);

    // Kareyi ekrana yazdırın
    printf("Kare: %d\n", kare);

    return 0;
}

