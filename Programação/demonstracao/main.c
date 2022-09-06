#include <stdio.h>
#include <stdlib.h>

int main()
{
    int paes;
    float preco, valortotal;

    printf("Quantos paes?\n");
    scanf("%d", &paes);

    preco = 1.50;
    valortotal = preco * paes;

    printf("\nO valor total eh de %.2f reais", valortotal);
    printf("\n\n\n");

    return 0;
}

