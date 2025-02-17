#include <stdio.h>
#include <string.h>

void tersCevir(char str[]) {
    int uzunluk = strlen(str);
    int i;
    for ( i = 0; i < uzunluk / 2; i++) {
        char temp = str[i];
        str[i] = str[uzunluk - i - 1];
        str[uzunluk - i - 1] = temp;
    }
}

int main() {
    char metin[100];

    // Kullan�c�dan metin giri�i al�n
    printf("Bir metin girin: ");
    gets(metin);

    // tersCevir fonksiyonunu kullanarak metni tersine �evirin
    tersCevir(metin);

    // Tersine �evrilen metni ekrana yazd�r�n
    printf("Metnin ters hali: %s\n", metin);

    return 0;
}

