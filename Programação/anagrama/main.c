#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define tam 30
//=========================================Função extra: banco de dados
void banco_de_dados ()
{
char pala[30][tam];
  pala[20][1] = "amora";
  pala[20][2] = "angola";
  pala[20][3] = "armeira";
  pala[20][4] = "arte";
  pala[20][5] = "algebra";
  pala[20][6] =  "aritmetica";
  pala[20][7] = "banco";
  pala[20][8] =  "banana";
  pala[20][9] =  "brasil";
  pala[20][10] = "britanico";
  pala[20][11] = "borboleta";
  pala[20][12] = "castelo";
  pala[20][13] = "croacia";
  pala[20][14] = "pequeno";
  pala[20][15] = "viver";
  pala[20][16] = "morrer";
  pala[20][17] = "lar";
  pala[20][18] = "uva";
  pala[20][19] = "odontologia";
  pala[20][20] = "oftalmologista";
  pala[20][21] = "ave";
  pala[20][22] = "lima";
  pala[20][23] = "emorragia";
  pala[20][24] = "linha";
  pala[20][25] = "rato";
  pala[20][26] = "malha";
  pala[20][27] = "dieta";
  pala[20][28] = "musica";
  pala[20][29] = "feminino";
  pala[20][30] = "masculino";

}
//=========================================Função extra: Banco de acetos
char  banco_de_acertos(char palavras)
{

}
////=========================================Função 2: Banco de Acertos
void banco_acertos( int * acertos, int * erros )
{

}



//=========================================Função 1: titulo
char titulo(){
  printf("==========================\n");
  printf("\t\tJOGO ANAGRAMA\n");
  printf("<<Regras do jogo>>\n");
  printf("->O jogador deve formar palavras especificas com as letras do quadro\n");
  printf("->Desconsidere os acentos\n");
  printf("->Existem 30 palavras no total\n");
  printf("->Maximo de Erros: 5\n");
  printf("\tBOA SORTE!!!!\n =========================================\n");
  printf("\t==== B A N C O  D E  L E T R A S ====\n\n \t\t\t   A V B U C Q D\n \t\t\t   P F S T E H R\n \t\t\t   M I O N L G E\n \t\t\t   I L T V A R A\n \t\t\t   O B C R O O N\n");
printf("Agora Tente adivinhar as palavras com as letras do quadro acima>>>");






}

int main(void)
{
int * pontu,*acertos,*erros;
titulo();
banco_de_dados ();
banco_acertos(acertos, erros);


return 0;
}
