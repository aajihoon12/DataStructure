#include <stdio.h>
#include <stdlib.h>
#include "CH06_ListBaseStack.h"

void StackInit(Stack *pstack) {
    pstack->head=NULL;
}

int SIsEmpty(Stack *pstack) {
    if(pstack->head==NULL)
        return TRUE;
    else
        return FALSE;  
}

void SPush(Stack *pstack, Data data) {
    Node *newNode=(Node*)malloc(sizeof(Node));
    newNode->data=data;

    newNode->next=pstack->head;
    pstack->head=newNode;
}

Data SPop(Stack *pstack) {
    Node *repos=pstack->head;
    Data retData=repos->data;

    if(SIsEmpty(pstack)) {
        pritnf("Stack Memory Error!");
        exit(-1);
    }

    pstack->head=pstack->head->next;
    free(repos);

    return retData;
}

Data SPeek(Stack *pstack) {
    if(SIsEmpty(pstack)) {
        printf("Stack Memory Error!");
        exit(-1);
    }    

    return pstack->head->data;
}