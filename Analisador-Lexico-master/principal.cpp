



//Declaração de bibliotecas
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "buffer.h"
#include "lexico.h"
#include "token.h"

using namespace std;


//Chamada do Analisador Léxico
int main ()
{
   //Basta apenas digitar o  endereço  e  o nome do
   //arquivo entre aspa dupla dentro do parenteses.
	arquivo("ArquivoFonte1.mln");

   //Retorna os tokens
   RetornaToken ();

   return 0;

}
