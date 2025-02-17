#include <stdio.h>

void matrisTopla(int matris1[3][3], int matris2[3][3], int sonuc[3][3]) {
	int i,j;
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            sonuc[i][j] = matris1[i][j] + matris2[i][j];
        }
    }
}

void matrisYazdir(int matris[3][3]) {
	int i,j;
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matris1[3][3] = {{1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}};

    int matris2[3][3] = {{9, 8, 7},
                         {6, 5, 4},
                         {3, 2, 1}};

    int toplamMatris[3][3];

    // Matrisleri toplama fonksiyonunu kullanarak topla
    matrisTopla(matris1, matris2, toplamMatris);

    // Toplam matrisini ekrana yazdýr
    printf("Toplam Matris:\n");
    matrisYazdir(toplamMatris);

    return 0;
}

