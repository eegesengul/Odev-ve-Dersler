#include <stdio.h>

float ortalamaHesapla(float vize, float final){
    float ortalama;
    printf("Vize Puaninizi Giriniz: ");
    scanf("%f",&vize);

    printf("Final Puaninizi Giriniz: ");
    scanf("%f",&final);
    
    ortalama=(vize*0.6)+(final*0.4);
    return ortalama;
}

float harfNot(float ort1){
    if(ort1>100){
        printf("Ortalamaniz 100'den Buyuk Olamaz Lutfen Gecerli Notlar Giriniz!\n");
    }
    else if(ort1>=80){
        printf("Notunuz: AA = %.2f\n",ort1);
    }
    else if(ort1>=60){
        printf("BA = %.2f\n",ort1);
    }
    else if(ort1>=40){
        printf("BB = %.2f\n",ort1);
    }
    else if(ort1>=0){
        printf("FF = %.2f\n",ort1);
    }
    else{
        printf("Ortalamaniz 0'dan Kucuk Olamaz Lutfen Gecerli Notlar Giriniz!\n");
    }
}

int main(){

float vize, final;
int cikis;

do{
    
    printf("\nUygulamadan cikmak icin 111, devam etmek icin herhangi bir sayi tuslayiniz => ");
    scanf("%d",&cikis);
    if(cikis==111){
        break;
    }

    float ort1=ortalamaHesapla(vize,final);        
    float not=harfNot(ort1);
    
}
while(cikis!=111);

    return 0;
}