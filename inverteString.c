#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "inverteString.h"

///Questão 1
// Obs.: Em sistemas embarcador, provavelmente, a quantidade de memória usada é muito importante
// então o uso de bibliotecas externas não seria interessante
// Porém, nesse caso, eu usarei a string.h para ultilizar a função "strlen()"
// Essa poderia ser substituida por um for para achar  o ultimo caracter da string ("\0"), mas de inicio
// Vou usar a função, e em situações similares também ultilizarei funções já prontas


// Atualização 02/03
// A função passou a funcionar in loco
// A nova ide que estou usando estava dando um warning estranho sobre o
// int tamanho
// Ela basicamente queria que eu usasse size_t eu procurei e descobri que size_t é um tipo de
// c++ então preferi não usar, mas aqui fica o a atenção

void InverteString(char* string)
{
    int tamanho = strlen(string);
    char aux;
    for (int i = 0; i < tamanho / 2; i++) {
        aux = string[i]; 
        string[i] = string[tamanho-1-i]; 
        string[tamanho-1-i] = aux;
    }
}
