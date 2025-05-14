#include <stdio.h>

#define STAŁA_PLANCKA 6.62607e-34
#define PRĘDKOŚĆ_ŚWIATŁA 3e8

int main(){

    double długość_fali;

    printf("Podaj długość fotonu: ");
    scanf(" %lf",&długość_fali);

    printf("Pęd fotonu: %e\n", STAŁA_PLANCKA/długość_fali);
    printf("Energia fotonu: %e\n",STAŁA_PLANCKA*PRĘDKOŚĆ_ŚWIATŁA/długość_fali);

    return 0;
}