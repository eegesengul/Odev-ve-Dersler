#include <stdio.h>

int main(){

    int satir, sutun, yukseklik;
    
    printf("Yuksekligi Kac Olan Ikizkenar Ucgen Istiyorsunuz?: ");
    scanf("%d",&yukseklik);

    for(satir=1; satir<=yukseklik; satir++){
        for(sutun=1; sutun<=yukseklik-satir; sutun++){
            printf(" ");
        }
        for(sutun=1; sutun<= 2*satir-1; sutun++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}