#include <stdio.h>

int main(){

    int v[4] = {1,2,3,4};
    int prod =1;

    for (int i=v[0]; i<4;i++){
        prod *= v[i];
    }

    printf("O produto dos elementos = %d\n",prod);
    return 0;
}