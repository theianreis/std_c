#include <stdio.h>
#include <math.h>


int main(){
double t, t_prox ,n ,erro;

printf("Digite o valor: ");
scanf("%lf",&n);
t=n/2;

do{
    t_prox = 0.5*(t+n/t);
    erro = fabs(t_prox-t);
    t=t_prox;
}while(erro>0.001);

printf("Raiz quadrada = %.3lf",t_prox);

return 0;
}