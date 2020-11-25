#include <stdio.h>
#include "CH05_DBLinkedList.h"

main() {
    List list;
    int data;
    ListInit(&list);

    LInsert(&list, 1); LInsert(&list, 1);
    LInsert(&list, 1); LInsert(&list, 1);
    LInsert(&list, 1); LInsert(&list, 1);

    if(LFirst(&list, &data)) {
        printf("%d ", data);

        while(LNext(&list, &data)) 
            printf("%d ", data);

        while(LPrevious(&list, &data))
            printf("%d ", data);
        
        printf("\n\n");
    }
    return 0;
}