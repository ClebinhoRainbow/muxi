#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "inverteString.h"

///Quest�o 1
// Obs.: Em sistemas embarcador, provavelmente, a quantidade de mem�ria usada � muito importante
// ent�o o uso de bibliotecas externas n�o seria interessante
// Por�m, nesse caso, eu usarei a string.h para ultilizar a fun��o "strlen()"
// Essa poderia ser substituida por um for para achar  o ultimo caracter da string ("\0"), mas de inicio
// Vou usar a fun��o, e em situa��es similares tamb�m ultilizarei fun��es j� prontas


// Atualiza��o 02/03
// A fun��o passou a funcionar in loco
// A nova ide que estou usando estava dando um warning estranho sobre o
// int tamanho
// Ela basicamente queria que eu usasse size_t eu procurei e descobri que size_t � um tipo de
// c++ ent�o preferi n�o usar, mas aqui fica o a aten��o

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
