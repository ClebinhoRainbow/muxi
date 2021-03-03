//#pragma once
//#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include "stackEven.h"
////autor: Cledson da Silva Araujo 19/02/2021
/////Questão 4
////De acordo com o enunciado, entendi que as funções e definiçoes do tipo
////já seriam implementadas e eu poderia ultilizar como eu queira
////typedef struct stack Stack;
////Stack *stackNew (void);
////void stackFree (Stack *p);
////void stackPush (Stack *p, int elem);
////int stackPop (Stack *p);
////int stackEmpty (Stack *p);
/////Considerando que stackNew cria uma nova pilha e
/////stackPop retorna o valor retirado
///// stackEmpty informa "1" se a pilha estiver vazia ou "0" caso contrario
//
//void stackRemoveEven(Stack* p){
//    Stack* aux = stackNew();
//    int numeroArmazenado = 0;
//    while (!stackEmpty(p)) {
//        numeroArmazenado = stackPop(p);
//        if (!(numeroArmazenado % 2))///se for impar
//        {
//            stackPush(aux, numeroArmazenado);
//        }
//    }
//    ///reinverte a pilha
//    while(!stackEmpty(aux)) {
//        stackPush(p, stackPop(aux));
//    }
//    stackFree(aux);
//}
