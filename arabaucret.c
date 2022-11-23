#include <stdio.h>

int main(){
char model;
int gun, km;
int ucret=0;
printf("Lutfen Tasitin Modelini Belirtin:");
scanf("%c",&model);
printf("Lutfen Tasiti Kac Gun Kullandiginizi Giriniz:");
scanf("%d",&gun);
printf("Lutfen Tasit ile Ne Kadar Yol Gittiginizi Giriniz:");
scanf("%d",&km);

switch(model){
    case 'a':
    case 'A': ucret=gun*20+km*18; break;
    case 'b': 
    case 'B': ucret=gun*32+km*22; break;
    case 's': 
    case 'S': ucret=gun*43+km*28; break;
    case 'p': 
    case 'P': ucret=gun*51+km*36; break;
 }
    printf("\nArabanin Modeli: %c\n", model);
    printf("Arabayi Kac Gun Kullandiniz: %d\n", gun);
    printf("Araba ile Kac Km Yol Yaptiniz: %d\n", km);
    printf("----------------------------\n");
    printf("Odemeniz Gereken Tutar: %d", ucret);

    return 0;
}