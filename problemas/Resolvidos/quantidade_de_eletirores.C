#include <stdio.h>

int main(){

    float votos_brancos, votos_nulos , votos_validos, percentual_B,percentual_N,percentual_V, total_de_eleitores;

    printf("Digite o número de votos brancos: ");
    scanf("%f",&votos_brancos);
    printf("Digite o número de votos nulos: ");
    scanf("%f",&votos_nulos);
    printf("Digite o número de votos válidos: ");
    scanf("%f",&votos_validos);

    total_de_eleitores = votos_brancos +votos_nulos + votos_validos;
    percentual_B = votos_brancos/total_de_eleitores;
    percentual_N = votos_nulos/total_de_eleitores;
    percentual_V = votos_validos/total_de_eleitores;

    printf("Percentual de valores votos brancos :%f \n",votos_brancos);
    printf("Percentual de valores votos nulos :%f  \n",votos_nulos);
    printf("Percentual de valores votos  válidos : %f \n",votos_validos);
    return 0;
}