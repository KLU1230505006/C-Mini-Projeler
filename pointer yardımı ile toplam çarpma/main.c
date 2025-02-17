#include <stdio.h>

void toplamCarpimHesapla(int sayi1, int sayi2, int *toplam, int * carpim) {
    *toplam=sayi1+sayi2;
    *carpim=sayi1*sayi2;
}

int main() {
    int sayi1, sayi2, toplam, carpim;

    // Kullan�c�dan iki say� al�n
    printf("Iki sayi girin: ");
    scanf("%d %d", &sayi1, &sayi2);

    // toplamCarpimHesapla fonksiyonunu kullanarak toplam ve �arp�m� hesaplay�n
    toplamCarpimHesapla(sayi1,sayi2,&toplam,&carpim);

    // Toplam ve �arp�m� ekrana yazd�r�n
    printf("Toplam: %d\nCarpim: %d\n", toplam, carpim);

    return 0;
}

