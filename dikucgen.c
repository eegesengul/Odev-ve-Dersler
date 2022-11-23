#include <stdio.h>

int main(){

    int satir, sutun, yukseklik;
    
    printf("Yuksekligi Kac Olan Dik Ucgen Istiyorsunuz?: ");
    scanf("%d",&yukseklik);

    for(satir=0; satir<=yukseklik; satir++){
        for(sutun=0; sutun<satir; sutun++){
            printf("#");
        }
        printf("\n");
    }


    return 0;
}