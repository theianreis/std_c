#include <stdio.h>

int main(){

    float temperatura;
    float kelvin, celsius;
    char unidade;

    printf("Digite a temperatura para conversão na unidade atual: ");
    scanf("%f",&temperatura);

    printf("Agora informe a unidade para conversão (Digite k para kelvin e c para Celsius\n): ");
    scanf(" %c",&unidade);

    if (unidade == 'k')
    {
       celsius = temperatura;
        kelvin = celsius + 273.15;
        printf("Temperatura em Kelvin é de: %f", kelvin);
    }else if(unidade =='c'){
        kelvin = temperatura;
        celsius = kelvin - 273.15;
        printf("Temperatura em Celsius é de: %f", celsius);
    }
}