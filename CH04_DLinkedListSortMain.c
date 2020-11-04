#include <stdio.h>
#include "CH04_DLinkedList.h"

int WhoIsPreced(LData d1, LData d2) {
    return d1-d2;
}

main() {
    List list;
    LData data;

    ListInit(&list);
    SetSortRule(&list, WhoIsPreced);

    LInsert(&list, 11); LInsert(&list, 11);
    LInsert(&list, 22); LInsert(&list, 22);
    LInsert(&list, 33);

    printf("dataOfNumber: %d\n", LCount(&list));
    if(LFirst(&list, &data)) {
        printf("%d ", data);

        while(LNext(&list, &data))
            printf("%d ", data);
    }
    printf("\n\n");

    if(LFirst(&list, &data)) {
        if(data == 22) 
            LRemove(&list);

        while(LNext(&list, &data))
            if(data == 22)
                LRemove(&list);
    }
    printf("\n\n");

    printf("dataOfNumber: %d\n", LCount(&list));
    if(LFirst(&list, &data)) {
        printf("%d ", data);

        while(LNext(&list, &data))
            printf("%d ", data);
    }
    printf("\n\n");
}