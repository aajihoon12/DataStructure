#include <stdio.h>
#include "CH04_DLinkedList.h"

<<<<<<< HEAD
int WhoIsPreced(LData d1, LData d2) {
=======
int (LData d1, LData d2) {
>>>>>>> 5c0fa13... CH05
    return d1-d2;
}

main() {
    List list;
    LData data;
<<<<<<< HEAD

    ListInit(&list);
    SetSortRule(&list, WhoIsPreced);

=======
    ListInit(&list);

    SetSortRule(&list, WhoIsPrecede);
    
>>>>>>> 5c0fa13... CH05
    LInsert(&list, 11); LInsert(&list, 11);
    LInsert(&list, 22); LInsert(&list, 22);
    LInsert(&list, 33);

<<<<<<< HEAD
    printf("dataOfNumber: %d\n", LCount(&list));
    if(LFirst(&list, &data)) {
        printf("%d ", data);

        while(LNext(&list, &data))
=======
    printf("데이터의 수: %d \n", LCount(&list));
    if(LFirst(&list, &data)) {
        pritnf("%d ", data);

        while(LNext(&list, &data)) 
>>>>>>> 5c0fa13... CH05
            printf("%d ", data);
    }
    printf("\n\n");

    if(LFirst(&list, &data)) {
<<<<<<< HEAD
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
=======
        if(data == 22)
            LRemove(&list);

        while(LNext(&list, &data)) {
            if(data == 22)
                LRemove(&list);
        }
    }
    printf("\n\n");

    printf("numberOfData: %d \n", LCount(&list));
   
    if(LFirst(&list, &data)) {
        pritnf("%d ", data);

        while(LNext(&list, &data)) 
            printf("%d ", data);
    }
    printf("\n\n");
 }
>>>>>>> 5c0fa13... CH05
