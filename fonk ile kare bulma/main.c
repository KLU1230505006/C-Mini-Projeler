#include <stdio.h>

int kareHesapla(int sayi) {
	int kare;
    kare=sayi*sayi;
    return kare;
}

int main() {
    int sayi;

    // Kullan�c�dan bir say� al�n
    printf("Karesini hesaplamak icin bir sayi girin: ");
    scanf("%d", &sayi);

    // kareHesapla fonksiyonunu kullanarak say�n�n karesini hesaplay�n
    int kare = kareHesapla(sayi);

    // Kareyi ekrana yazd�r�n
    printf("Kare: %d\n", kare);

    return 0;
}

