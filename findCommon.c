#pragma once
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "findCommon.h"
//autor: Cledson da Silva Araujo 19/02/2021
///Questão 6
//Considerando que resultSize é conhecido
//se um valor se repetir duas vezes em algum dos vetores ele sera retornado
//Se "achouvaloresIguais" err_t.achouValoreIguais == "1" se nao "0"
//Na struct err_t se encontra um ponteiro para o vetor result



err_t findCommon(int* list1, int numElem1, int* list2, int numElem2, int* result, int resultSize)
{
    
    //entendi que resultSize , de alguma forma, já saberia quantos numeros o array final teria
    // e que result é o vetor final ja alocado
    err_t resposta;
    resposta.achouValoresIguais = 0;
    int contResposta = 0;
   
    int* listaIguaisAux = (int*)malloc(sizeof(int) * resultSize);
    for (int i = 0; i < numElem2; i++)
    {
        listaIguaisAux[i] = list2[i];
    }
    int numElemAux = numElem2;
    for (int i = 0; i < numElem1; i++)
    {
        for (int j = 0; j < numElemAux; j++)
        {
            if (list1[i] == listaIguaisAux[j])
            {
                resposta.achouValoresIguais = 1;
                result[contResposta] = list1[i];
                contResposta++;
                break;

            }
        }
    }

    //o campo result da struct recebe o endereço do result alocado
    free(listaIguaisAux);
    return resposta;


}

int limpaVetor(int* vet, int tamanho, int num)
{
    int cont = 0;
    //acha o numero de valores nao repetidos
    for (int i = 0; i < tamanho; i++)
    {
        if (vet[i] != num)
        {

            cont++;
        }
    }
    int* vetAux = (int*)malloc(sizeof(int) * cont);
    for (int i = 0; i < cont; i++)
    {
        vetAux[i] = 0;
    }

    int contAux = 0;
    ///preencho o vetor auxiliar com os valores que sobraram
    for (int i = 0; i < tamanho; i++)
    {

        if (vet[i] != num)
        {

            vetAux[contAux] = vet[i];
            contAux++;
        }
    }
    //O endereco de vetAux vai para vet;
    vet = vetAux;

    return cont;
}

