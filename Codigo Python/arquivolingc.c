#include <stdio.h>
#include <stdlib.h>

int main ()
{

int num1, num2, num3;

printf("Ola, mundo!\n");
printf("Never Gonna Give You Up\n");
printf("Digite um numero");
scanf("%d", &num1);
printf("\nDigite outro numero");
scanf("%d", &num2);
num3 = num1 + num2;
printf("\nA soma dos numeros eh: %d", num3);

return 0;

}