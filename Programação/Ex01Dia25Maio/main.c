#include <stdio.h>
#include <stdlib.h>

float* ler_vetor (int *N){

float * vet;

printf("\n Numero de elementos do vetor:");
scanf("%d", N);

printf("Digite os elementos");

vet = (float*) calloc (*N, sizeof(float));

if (vet == NULL) exit(1);

for (int i=0; i<*N; i++)
    scanf("%f", &vet[i]);

return vet;
}

void maior_menor(float *vet, int N, float* *Pmr, float* *Pmn){

(*Pmr) = (*Pmn) = vet;

for (int i=1;i<N;i++)
  {
    if (*(*Pmr)<vet[i]) (*Pmr) = &vet[i];
    if (*(*Pmn)<vet[i]) (*Pmn) = &vet[i];
  }
}

void imp_vetor(float* *Pmr, float* *Pmn){

    printf("%.1f", Pmr);
    printf("%.1f", Pmn);
}


int main()
{
    float *vetor, *Pmaior, *Pmenor, *Pvet;
    int N;
    Pvet = ler_vetor(&N);
    maior_menor(vetor, N, &Pmaior, &Pmenor);
    imp_vetor(Pvet, N);
    printf("Maior: %.1f     Menor: %.1f", *Pmaior, *Pmenor);
    return 0;
}
