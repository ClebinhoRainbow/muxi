#ifndef FINDCOMMON_H_INCLUDED
#define FINDCOMMON_H_INCLUDED

///Questão 6
typedef struct
{
    int achouValoresIguais;
    
} err_t;

err_t findCommon(int* list1, int numElem1, int* list2, int numElem2, int* result, int resultSize);
int limpaVetor(int* vet, int tamanho, int num);


#endif // FINDCOMMON_H_INCLUDED
