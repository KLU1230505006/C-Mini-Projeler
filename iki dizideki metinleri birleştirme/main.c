#include <stdio.h>
#include <string.h>

void birlestir(char hedef[], char eklenecek[]) {
    // strcat fonksiyonu ile iki karakter dizisini birle�tir
    strcat(hedef, eklenecek);
}

int main() {
    char hedef[100], eklenecek[50];

    // Kullan�c�dan hedef ve eklenecek metinleri al�n
    printf("Hedef metni girin: ");
    gets(hedef);

    printf("Eklenecek metni girin: ");
    gets(eklenecek);

    // birlestir fonksiyonunu kullanarak metinleri birle�tirin
    birlestir(hedef, eklenecek);

    // Birle�tirilmi� metni ekrana yazd�r�n
    printf("Birlesmis metin: %s\n", hedef);

    return 0;
}

