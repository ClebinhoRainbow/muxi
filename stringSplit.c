#pragma once
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "stringSplit.h"
//autor: Cledson da Silva Araujo 19/02/2021
///Questão 3

//TODO trasformar comentarios em funções
// considerando length igual o tamanho de "text"
//Obs.: fiz teste com strings como /flamengo/fluminense/botafogo/ e
//a stringSplit não funcionou, acredito que por exceder a memoria dos tipos;
//Atualizacao 02/03
// a string só nao estava funcionando pois não estava tratando o alocamento de memoria 
// e a limpeza do vet [que estava com lixo (dump)] 
// esta funcionando pra todas as strings testadas
void esvaziaVetor(char* vet) {
    for (int i = 0; i < strlen(vet); i++)
    {
        vet[i] = ' ';
    }
}
int quantidadeDePalavras(const char* text,char separador,int tamanho) {
    int numeroDeSeparadores = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (text[i] == separador)
        {
            numeroDeSeparadores++;
        }
    }
    return numeroDeSeparadores;

}
int aMaiorPalavra(const char* text, char separador, int tamanho) {
    int auxMaiorPalavra = 0;
    int maiorPalavra = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (text[i] == separador)
        {
            i++;
            if (auxMaiorPalavra > maiorPalavra)
            {
                maiorPalavra = auxMaiorPalavra;
            }
            auxMaiorPalavra = 0;
        }
        auxMaiorPalavra++;
    }
    return maiorPalavra;
}
char** criaMatriz(int numeroPalavras,int maiorPalavra) {
    char** matrizDePalavras = (char**)malloc(sizeof(char*) * numeroPalavras);
    for (int i = 0; i < numeroPalavras; i++)
    {
        matrizDePalavras[i] = (char*)malloc(sizeof(char) * maiorPalavra + 1);

    }
    return matrizDePalavras;
}




char** stringSplit(const char* text, char separator, int* length)
{

    ///AchaQuantidadeDePalavras
    int numeroPalavras = quantidadeDePalavras(text,separator,length) - 1;

    ///Acha a maior palavra para que a matriz possa "acomodar" em memoria  todas as palavras
    int maiorPalavra = aMaiorPalavra(text,separator,length);

    ///Cria Matriz de Palavras a ser retornada
    char** matrizDePalavras = criaMatriz( numeroPalavras,  maiorPalavra);

    ///cria o vetor de palavra
    //"abriu" signigica que ja se encontrou um separador (abriu == 1)
    //ou ainda nao se encontrou nenhum (abriu == 0)
    //"contadorPalavra" serve para indicar em qual posicao da matriz adicionar o vetor
    int abriu = 0;
    int contadorPalavra = 0;
    int posicaoVet = 0;
    char* vet = (char*)malloc(sizeof(char) * maiorPalavra + 1);
    
    for (int i = 0; i < length; i++)
    {

        if (text[i] == separator && !abriu)
        {
            abriu = 1;
            esvaziaVetor(vet);
            i++;
        }

        vet[posicaoVet++] = text[i];
        if (text[i + 1] == separator)
        {
            abriu = 0;

            /// adiciona o vetor na matriz
            for (int j = 0; j < maiorPalavra + 1; j++)
            {
                matrizDePalavras[contadorPalavra][j] = vet[j];
                if (j + 1 == maiorPalavra + 1)
                {
                    matrizDePalavras[contadorPalavra][j] = '\0';
                }
            }

            posicaoVet = 0;
            contadorPalavra++;
        }

    }
    free(vet);
    return matrizDePalavras;
}

