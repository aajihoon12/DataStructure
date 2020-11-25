#ifndef __DDB_LINKED_LIST_H__
#define __DDB_LINKED_LIST_H__

#define TRUE 1;
#define FALSE 0;

typedef int Data;

typedef struct _node {
    Data data;
    struct _node * next;
    struct _node * prev;
}Node;

typedef struct _DDBLinkedList {
    Node * head;
    Node * tail;
    Node * cur;
    int numOfData;
}DDBLinkedList;

typedef DDBLinkedList List;

void ListInit(List * plist);
void LInsert(List * plist, Data data);

int LFirst(List *plist, Data *data);
int LNext(List *plist, Data *data);
int LPrevious(List *plist, Data *data);

Data LRemove(List *plist);
int LCount(List *plist);
#endif