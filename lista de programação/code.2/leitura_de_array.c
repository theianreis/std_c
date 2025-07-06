#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int a[20];

    srand(time(NULL)); //pega a hora como parametro para gerar valores aleatórios

    for(int i = 0; i<20;i++){
        a[i] = rand()%100; //Gera valores aleatórios (Controlado)
        printf("%d", a[i]);
    }
    printf("\n \n");


    return 0;
}
