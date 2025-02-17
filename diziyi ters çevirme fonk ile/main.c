#include <stdio.h>

void diziTersCevir(int *dizi, int boyut) {
    
    int i,temp,j;
    for(i=0,j=boyut-1;i<boyut/2;i++,j--){
    	
    	temp=dizi[i];
    	dizi[i]=dizi[j];
    	dizi[j]=temp;
    	
	}
}

int main() {
    int dizi[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int boyut=sizeof(dizi)/sizeof(dizi[0]);
    // diziTersCevir fonksiyonunu kullanarak diziyi tersine çevirin
    diziTersCevir(dizi,boyut);

    // Tersine çevrilen diziyi ekrana yazdýrýn
    printf("Tersine Cevrilmis Dizi: ");
    int i;
    for ( i = 0; i < 10; i++) {
        printf("%d ", dizi[i]);
    }

    return 0;
}

