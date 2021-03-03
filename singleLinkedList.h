#ifndef SINGLELINKEDLIST_H_INCLUDED
#define SINGLELINKEDLIST_H_INCLUDED

///Questão 5
typedef struct
{
    int data;
    struct SingleLinkedListOfIntsNode* next;


} SingleLinkedListOfIntsNode;
void insereNoFimdaLista(SingleLinkedListOfIntsNode** lista, SingleLinkedListOfIntsNode* no);
void ordenaLista(SingleLinkedListOfIntsNode* cabeca) ;
SingleLinkedListOfIntsNode* juntaListas(SingleLinkedListOfIntsNode* l1, SingleLinkedListOfIntsNode* l2);
void listPartition(SingleLinkedListOfIntsNode** head, int x);



#endif // SINGLELINKEDLIST_H_INCLUDED
