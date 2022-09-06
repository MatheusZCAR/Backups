#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

float comp_arco(float ra, float ang){

    float comp_arc = (ra * PI * ang)/180;

    return comp_arc;

}


int main(){

    float raio, angulo, comprimento;

    printf("Calculadora de Comprimento de Arco\n");
    printf("============================================\n");

    printf("Raio da Circunferencia = ");
    scanf("%f", &raio);

    printf("\nAngulo Central (em graus) = ");
    scanf("%f", &angulo);

    comprimento = comp_arco(raio, angulo);

    printf("\n============================================\n");
    printf("Resultado do Comprimento = %.2f", comprimento);

    return 0;
}
