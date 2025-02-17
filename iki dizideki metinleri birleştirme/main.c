#include <stdio.h>
#include <string.h>

void birlestir(char hedef[], char eklenecek[]) {
    // strcat fonksiyonu ile iki karakter dizisini birleþtir
    strcat(hedef, eklenecek);
}

int main() {
    char hedef[100], eklenecek[50];

    // Kullanýcýdan hedef ve eklenecek metinleri alýn
    printf("Hedef metni girin: ");
    gets(hedef);

    printf("Eklenecek metni girin: ");
    gets(eklenecek);

    // birlestir fonksiyonunu kullanarak metinleri birleþtirin
    birlestir(hedef, eklenecek);

    // Birleþtirilmiþ metni ekrana yazdýrýn
    printf("Birlesmis metin: %s\n", hedef);

    return 0;
}

