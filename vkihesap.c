#include <stdio.h>

int main(){

    float kilo;
    float boy;
    float vki;

    printf("\nVucut Kitle Indeksi Hesaplama\n\n");
    printf("Boyunuzu giriniz(m): ");
    scanf("%f",&boy);
    printf("Kilonuzu giriniz(kg): ");
    scanf("%f",&kilo);

    vki= kilo/(boy*boy);
    printf("Vucut Kitle Indeksi = %.1f\n", vki);

    if(vki<18.5){
        printf("Vucut Kitle Indeksine gore ZAYIF kategorisindesiniz.\n");
    }
    else if(vki<24.9){
        printf("Vucut Kitle Indeksine gore NORMAL kategorisindesiniz.\n");
    }
    else if(vki<29.9){
        printf("Vucut Kitle Indeksine gore KILOLU kategorisindesiniz.\n");
    }
    else if(vki<39.9){
        printf("Vucut Kitle Indeksine gore OBEZ kategorisindesiniz.\n");
    }
    else{
        printf("Vucut Kitle Indeksine gore EKSTRA OBEZ kategorisindesiniz.\n");
    }
    return 0;
}