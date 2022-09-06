#include <stdio.h>
#include <stdlib.h>

int main()
{

float calc (float x, float y);
float x, y, area;


    printf("Calculadora de area de retangulos");

    printf("\nBase:");
    scanf("%f", &x);

    printf("\nAltura:");
    scanf("%f", &y);

    area = calc (x, y);

    printf("Area total = %f", area);

    return 0;

}

float calc (float base, float altura){

float area = base * altura;

return area;
}


