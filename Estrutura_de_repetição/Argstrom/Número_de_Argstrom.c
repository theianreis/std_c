#include <stdio.h>
#include <math.h>

int main() {

    int num, temp,digito,soma=0;

do{
    printf("Infome um número entre 100 e 900: ");
    scanf("%d",&num);

    if(!(num>100&num<999)){
        printf("Fora do intevalo");
    }
} while (!(num>100 && num<999));


temp=num;

while (temp!=0)
{
    digito=temp%10;
    soma+=pow(digito,3);
    temp=temp/10;
}

if (soma==num)
{
    printf("O número de Angstrom:%d ",num);
}else{
    printf("Não é um número de Angstrom");
}
    return 0;
}
