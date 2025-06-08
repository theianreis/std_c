#include <stdio.h>

int main(){

    //Declara variavies
    int inicio, fim;            
    int num, i, num_nec;       
    char continua;

    //criando do-while
    do
    {
        //Atribui valores ao intervalo
        printf("Digite o valor do início do intervalo: ");
        scanf("%d", &inicio);
        printf("Digite o valor do fim do intervalo: ");
        scanf("%d", &fim);

        // aplicar o for com a condição de iniciar em inicio , terminar em fim, e contador num de divisão
        for (num = inicio; num <= fim; num++) {
            num_nec = 0;  // zera o número de divisores
            i = 1;        // começa a testar divisores a partir de 1

            // testa todos os divisores de num
            while (i <= num) {
                if (num % i == 0) {
                    num_nec++;  // conta o divisor
                }
                i++;
            }

            // se o número de divisores for 2 é primo
            if (num_nec == 2) {
                printf("%d é primo\n", num);
            }
        }

        // pergunta se quer avaliar outro intervalo
        printf("Você quer avaliar outro intervalo? (s/n): ");
        scanf(" %c", &continua);

    } while (continua == 's');//se for s continua, se for diferente de s ele não continua 

    return 0;
}
