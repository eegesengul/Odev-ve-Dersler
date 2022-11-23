#include <stdio.h>
/* 
Lisansüstü alımları için 
Ales %50, Yds %25, Mezuniyet Ortalaması %25

Minimum şart 60 üstü alınıyor.
Eğer Yds puanı 70den küçükse giremiyor.
*/
int main(){

    float alespuan;
    float ydspuan;
    float mezunpuan;
    float alimpuani;
    
    printf("\nLisansustu Alimlari\n\n");

    printf("ALES puaninizi giriniz: ");
    scanf("%f",&alespuan);

    printf("YDS puaninizi giriniz: ");
    scanf("%f",&ydspuan);

    printf("Mezuniyet puaninizi giriniz: ");
    scanf("%f",&mezunpuan);
    
    alimpuani= (alespuan*50/100)+(ydspuan*25/100)+(mezunpuan*25/100);
    printf("Lisansustu Alim Puani = %.1f\n", alimpuani);

    if(alimpuani>60 && ydspuan>70){
        printf("Lisansustu Programa Alindiniz!\n\n");
    }
    else if (alimpuani>60 && ydspuan<70){
        printf("Lisansustu Programa YDS Puaninizdan Dolayi Alinmadiniz! \n\n");
    }
    else{
        printf("Lisansustu Programa Alinmadiniz!\n\n");       
    }
    return 0;
}