#include <stdio.h>

void toplamCarpimHesapla(int sayi1, int sayi2, int *toplam, int * carpim) {
    *toplam=sayi1+sayi2;
    *carpim=sayi1*sayi2;
}

int main() {
    int sayi1, sayi2, toplam, carpim;

    // Kullanýcýdan iki sayý alýn
    printf("Iki sayi girin: ");
    scanf("%d %d", &sayi1, &sayi2);

    // toplamCarpimHesapla fonksiyonunu kullanarak toplam ve çarpýmý hesaplayýn
    toplamCarpimHesapla(sayi1,sayi2,&toplam,&carpim);

    // Toplam ve çarpýmý ekrana yazdýrýn
    printf("Toplam: %d\nCarpim: %d\n", toplam, carpim);

    return 0;
}

