#include <stdio.h>
#include "CH04_DLinkedList.h"

main() {
    List list;
    LData data;
    ListInit(&list);

    LInsert(&list, 1); LInsert(&list, 2);
    LInsert(&list, 4); LInsert(&list, 8);
    LInsert(&list, 16); LInsert(&list, 32);

    printf("현재 데이터의 수: %d \n", LCount(&list));
    if(LFirst(&list, &data)) {
        printf("%d ", data);   
    
        while(LNext(&list, &data))
            printf("%d ", data);
    }
    printf("\n\n");

    if(LFirst(&list, &data)) {
        if(data==32)
            LRemove(&list);

        while(LNext(&list, &data)) {
            if(data==32)
                LRemove(&list);
        }
    }

    printf("%d \n", LCount(&list));
    if(LFirst(&list, &data)) {
        printf("%d ", data);   
    
        while(LNext(&list, &data))
            printf("%d ", data);
    }
    printf("\n\n");

    return 0;
}