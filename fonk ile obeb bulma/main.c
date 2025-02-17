#include <stdio.h>

int ebobHesapla(int sayi1, int sayi2) {
    int i, ebob = 1;

    for (i = 1; i <= sayi1 && i <= sayi2; i++) {
        if (sayi1 % i == 0 && sayi2 % i == 0) {
            ebob = i;
        }
    }

    return ebob;
}

int main() {
    int sayi1, sayi2;

    // Kullanýcýdan iki sayý alýn
    printf("EBOB'unu hesaplamak icin iki sayi girin: ");
    scanf("%d %d", &sayi1, &sayi2);

    // ebobHesapla fonksiyonunu kullanarak EBOB'u hesaplayýn
    int ebob = ebobHesapla(sayi1, sayi2);

    // EBOB'u ekrana yazdýrýn
    printf("EBOB: %d\n", ebob);

    return 0;
}

