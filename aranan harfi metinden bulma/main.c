#include <stdio.h>
#include <string.h>

int karakterSayisi(char str[], char karakter) {
    int i,sayac=0;
    
    int uzunluk=strlen(str);
    for(i=0;i<uzunluk;i++){
    	
    	if(str[i]==karakter){
    		sayac++;
		}
    	
	}
    return sayac;
    
    
}

int main() {
    char metin[100], arananKarakter;
    int sayi;

    // Kullanıcıdan metni ve aranacak karakteri alın
    printf("Metni girin: ");
    gets(metin);

    printf("Aranacak karakteri girin: ");
    scanf("%c", &arananKarakter);

    // karakterSayisi fonksiyonunu kullanarak karakterin sayısını bulun
    sayi = karakterSayisi(metin,arananKarakter);

    // Bulunan sayıyı ekrana yazdırın
    printf("%c karakteri %d kez geciyor.\n", arananKarakter, sayi);

    return 0;
}

