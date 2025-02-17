#include <stdio.h>
#include <string.h>

int palindromKontrol(char str[]) {
    
    int i,j;
    int uzunluk=strlen(str);
    for(i=0,j=uzunluk-1;i<uzunluk/2;i++,j--)
	{
    	
    	if(str[i]!=str[j]){
    		return 0;
		}
    	
	}
    return 1;	
    		
	}
	

int main() {
    char kelime[50];

    // Kullanýcýdan kelimeyi alýn
    printf("Bir kelime girin: ");
    gets(kelime);

    // palindromKontrol fonksiyonunu kullanarak palindrom kontrolü yapýn
    if (palindromKontrol(kelime) == 1) {
        printf("Bu kelime bir palindromdur.\n");
    } else {
        printf("Bu kelime bir palindrom degildir.\n");
    }

    return 0;
}

