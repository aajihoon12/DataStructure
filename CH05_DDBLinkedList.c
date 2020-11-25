#include <stdio.h>
#include <stdlib.h>
#include "CH05_DDBLinkedList.h"

void ListInit(List *plist) {
    plist->head=(Node*)malloc(sizeof(Node));
    plist->tail=(Node*)malloc(sizeof(Node));
    
    plist->head->next=plist->tail;
    plist->head->prev=NULL;
    plist->tail->next=NULL;
    plist->tail->prev=plist->head;

    plist->numOfData=0;
}

void LInsert(List *plist, Data data) {
    Node* newNode=(Node*)malloc(sizeof(Node*));
    newNode->data=data;

    newNode->prev=plist->tail->prev;
    plist->tail->prev->next=newNode;

    newNode->next=plist->tail;
    plist->tail->prev=newNode;

    (plist->numOfData)++;
}

int LFirst(List *plist, Data *data) {
    if(plist->head->next=plist->tail)
        return FALSE;

    plist->cur=plist->head->next;
    *data=plist->cur->data;

    return TRUE;
}

int LNext(List *plist, Data *pdata) {
    if(plist->cur->next==plist->tail)
        return FALSE;

    plist->cur=plist->cur->next;
    *pdata=plist->cur->data;

    return TRUE;
}

int LPrevious(List *plist, Data *pdata) {
    if(plist->cur->prev==plist->head)
        return FALSE;

    plist->cur=plist->cur->prev;
    *pdata=plist->cur->data;
    return TRUE;
} 

Data LRemove(List *plist) {
    Node* repos=plist->cur;
    Data retData=repos->data;

    plist->cur->prev->next=plist->cur->next;
    plist->cur->next->prev=plist->cur->prev;

    plist->cur=plist->cur->prev;

    free(repos);
    (plist->numOfData)--;
    return retData;
}

int LCount(List *plist) {
    return (plist->numOfData);
}

