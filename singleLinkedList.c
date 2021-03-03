//#pragma once
//#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include "singleLinkedList.h"
//
////autor: Cledson da Silva Araujo 19/02/2021
/////Questão 5
////Quando li ordenação lembrei do Quicksort
////Ainda mais com a variavei "x" que representaria um pivo
////No entanto, descobri que o exercicio não era exatamente sobre isso
////Considerei que SingleLinkedListOfIntsNode só teria dois atributos um int com o valor do nó
//// e um ponteiro para o proximo nó
//
//void ordenaLista(SingleLinkedListOfIntsNode* cabeca) {
//    SingleLinkedListOfIntsNode* atual = cabeca, * index;
//    int aux;
//
//    if (cabeca == NULL) {
//        return;
//    }
//    else {
//        while (atual != NULL) {
//
//            index = atual->next;
//
//            while (index != NULL) {
//
//                if (atual->data > index->data) {
//                    aux = atual->data;
//                    atual->data = index->data;
//                    index->data = aux;
//                }
//                index = index->next;
//            }
//            atual = atual->next;
//        }
//    }
//
//}
//SingleLinkedListOfIntsNode* juntaListas(SingleLinkedListOfIntsNode* l1, SingleLinkedListOfIntsNode* l2)
//{
//    SingleLinkedListOfIntsNode* resultado,*aux;
//    aux = l1;
//    while(aux->next != NULL)
//    {
//        aux = aux->next;
//    }
//    // Na ultima posicao da lista um o valor do proximo no recebe o inicio de l2;
//    aux->next = l2;
//    // O ponteiro resultado receve o inicio de l1;
//    resultado = l1;
//    // libero os ponteiro l1 e l2;
//    return resultado;
//
//}
//void listPartition(SingleLinkedListOfIntsNode** head, int x) {
//    ///acha a posiçao x
//    int posicaoDeX = 0;
//    if ((*head)->next) {
//        for (int i = 0; (*head)->next != NULL; i++)
//        {
//            if ((*head)->data == x) {
//                posicaoDeX = i;
//            }
//        }
//    }
//    else {
//        posicaoDeX = 0;
//    }
//    ///percorre a lista colocando os valores menores  que x numa outra lista
//    SingleLinkedListOfIntsNode* valoresMenores, * aux;
//    valoresMenores->next = NULL;
//
//    for (aux = head; (aux)->next != NULL; aux = aux->next)
//    {
//        if ((aux)->data < x) {
//            insereNoFimdaLista(&valoresMenores, aux);
//        }
//    }
//    ///percorre a lista colocando os valores maiores ou iguais que x numa outra lista
//    SingleLinkedListOfIntsNode* valoresMaiores;
//    valoresMaiores->data = NULL;
//    for (aux = head; (aux)->next != NULL; aux = aux->next)
//    {
//        if ((aux)->data >= x) {
//            insereNoFimdaLista(&valoresMaiores, aux);
//        }
//    }
//    ///Coloca as duas listas em ordem
//    ordenaLista(valoresMaiores);
//    ordenaLista(valoresMenores);
//    ///junta as duas listas em uma nova lista e aponta a head para o inicio da nova lista
//    (*head) = juntaListas(valoresMaiores, valoresMaiores);
//
//}
//
