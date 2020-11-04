#include <stdio.h>
#include <stdlib.h>
#include "CH04_DLinkedList.h"
#include "CH03_Point.h"

main() {
    List list;
    Point comPos;
    Point * ppos;

    ListInit(&list);

    ppos = (Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 2, 1);
    LInsert(&list, ppos);

    ppos = (Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 2, 2);
    LInsert(&list, ppos);

    ppos = (Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 3, 1);
    LInsert(&list, ppos);

    ppos = (Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 3, 2);
    LInsert(&list, ppos);

    printf("Number of current data: %d \n", LCount(&list));

    if(LFirst(&list, &ppos)) {
        ShowPointPos(ppos);

        while(LNext(&list, &ppos)) {
            ShowPointPos(ppos);
        }
    }
    printf("\n");

    comPos.xpos=2;
    comPos.ypos=0;

    if(LFirst(&list, &ppos)) {
        if(PointComp(ppos, &comPos)==1) {
            ppos = LRemove(&list);
            free(ppos);
        }

        while(LNext(&list, &ppos)) {
            if(PointComp(ppos, &comPos)==1) {
                ppos = LRemove(&list);
                free(ppos);
            }
        }
    }
    printf("Number of current data: %d \n", LCount(&list));

    if(LFirst(&list, &ppos)) {
        ShowPointPos(ppos);

        while(LNext(&list, &ppos)) {
            ShowPointPos(ppos);
        }
        printf("\n");

        return 0;
    }
}