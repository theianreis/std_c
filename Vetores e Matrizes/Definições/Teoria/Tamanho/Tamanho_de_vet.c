#include <stdio.h>

int  main(){

    int myNumbers[] = {10, 25, 50, 75, 100};

    printf("%zu\n", sizeof(myNumbers)); 
    //Leitura do número de bits

    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    // bit total / bit[0] = 5

    printf("%d", length);  

    return 0;
}