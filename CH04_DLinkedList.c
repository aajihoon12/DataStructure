#include <stdio.h>
#include "CH04_DLinkedList.h"

void ListInit(List * plist) {
    plist->head=(Node*)malloc(sizeof(Node));
    plist->head->next=NULL;
    plist->numOfData=0;
    plist->comp=NULL;
}

void FInsert(List * plist, LData data) {
    Node * newNode=(Node*)malloc(sizeof(Node));
    newNode->data=data;

    newNode->next=plist->head->next;
    plist->head->next=newNode;

    (plist->numOfData)++;
}

void SInsert(List * plist, LData data) {
    Node* newNode=(Node*)malloc(sizeof(Node));
    Node* pred=plist->head;
    newNode->data=data;

    while(pred->next != NULL && comp(data, pred->next->data) >= 0) {
        pred=pred->next;
    }

    newNode->next=pred->next;
    pred->next=newNode;
    (plist->numOfData)++;
}

void LInsert(List * plist, LData data) {
    if(plist->comp==NULL) {
        FInsert(plist, data);
        return;
    }
    
    SInsert(plist, data);
}

int LFirst(List * plist, LData * data) {
    if(plist->head->next==NULL)
        return 0;

    plist->cur=plist->head->next;
    plist->before=plist->head;

    *data=plist->cur->data;
    return 1;
}

int LNext(List * plist, LData * data) {
    if(plist->cur->next==NULL) 
        return 0;

    plist->before=plist->cur;
    plist->cur=plist->cur->next;

    *data=plist->cur->data;
    return 1;
}

LData LRemove(List * plist) {
    if(plist->before == plist -> cur)
        return;

    Node * repos = plist->cur;
    LData rdata = repos->data;

    plist->before->next = plist->cur->next;
    plist->cur = plist->before;

    free(repos);
    (plist->numOfData)--;
    return rdata;
}

int LCount(List * plist) {
    return plist->numOfData;
}

void SetSortRule(List * plist, int (*comp)(LData d1, LData d2)) {
    plist->comp = comp;
}