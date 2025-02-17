#include <stdio.h>
#include <string.h>

void birlestir(char hedef[], char eklenecek[]) {
    // strcat fonksiyonu ile iki karakter dizisini birleştir
    strcat(hedef, eklenecek);
}

int main() {
    char hedef[100], eklenecek[50];

    // Kullanıcıdan hedef ve eklenecek metinleri alın
    printf("Hedef metni girin: ");
    gets(hedef);

    printf("Eklenecek metni girin: ");
    gets(eklenecek);

    // birlestir fonksiyonunu kullanarak metinleri birleştirin
    birlestir(hedef, eklenecek);

    // Birleştirilmiş metni ekrana yazdırın
    printf("Birlesmis metin: %s\n", hedef);

    return 0;
}

