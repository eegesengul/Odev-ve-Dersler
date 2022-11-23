#include <stdio.h>

int main(){

    int marka;
    float benzin;
    int reno=0;
    float renobenzin=0;
    int mazda=0;
    float mazdabenzin=0;
    int honda=0;
    float hondabenzin=0;
    int ford=0;
    float fordbenzin=0;
    int toplam=0;
    float toplambenzin=0;
    
    do{
        printf("Marka, tutar giriniz:");
        scanf("%d %f", &marka, &benzin);
        
        switch(marka){
            case 1: reno++; renobenzin+=benzin; toplambenzin+=benzin; break;
            case 2: mazda++; mazdabenzin+=benzin; toplambenzin+=benzin; break;
            case 3: honda++; hondabenzin+=benzin; toplambenzin+=benzin; break;
            case 4: ford++; fordbenzin+=benzin; toplambenzin+=benzin; break;
            case 111: printf("\nPROGRAM SONA ERDI \n"); break;
            default: printf("\nGecerli bir kod giriniz! \n");
        }
        toplam++;
    }
    while(marka!=111);
   
    printf("OZET BILGILER\n");

    if(reno>mazda && reno>honda && reno>ford){
        printf("En cok gelen arac markasi Renault(%d kez)\n", reno);
    }
    if(mazda>reno && mazda>honda && mazda>ford){
        printf("En cok gelen arac markasi Mazda(%d kez)\n", mazda);
    }
    if(honda>reno && honda>mazda && honda>ford){
        printf("En cok gelen arac markasi Honda(%d kez)\n", honda);
    }
    if(ford>reno && ford>mazda && ford>honda){
        printf("En cok gelen arac markasi Ford(%d kez)\n", ford);
    }

    if(renobenzin>mazdabenzin && renobenzin>hondabenzin && renobenzin>fordbenzin){
        printf("En cok satis yapilan arac markasi Renault(%.2f YTL)\n", renobenzin);
    }
    if(mazdabenzin>renobenzin && mazdabenzin>hondabenzin && mazdabenzin>fordbenzin){
        printf("En cok satis yapilan arac markasi Mazda(%.2f YTL)\n", mazdabenzin);
    }
    if(hondabenzin>renobenzin && hondabenzin>mazdabenzin && hondabenzin>fordbenzin){
        printf("En cok satis yapilan arac markasi Honda(%.2f YTL)\n", hondabenzin);
    }
    if(fordbenzin>renobenzin && fordbenzin>mazdabenzin && fordbenzin>hondabenzin){
        printf("En cok satis yapilan arac markasi Ford(%.2f YTL)\n", fordbenzin);
    }
    toplam=toplam-1;
    printf("Toplam benzin alan arac sayisi = %d arac \n", toplam);
    printf("Toplam satilan benzin tutari = %.2f YTL)\n\n", toplambenzin);
}