#include <stdio.h>
#include "CH03_ArrayList.h"
#include "CH03_NameCard.h"

main() {
    NameCard * pcard;
    List list;

    ListInit(&list);

    pcard = MakeNameCard("피들스틱", "0000-0000-0001");
    LInsert(&list, pcard);
    pcard = MakeNameCard("볼리베어", "0000-0000-0000");
    LInsert(&list, pcard);
    pcard = MakeNameCard("자크", "0000-0000-0003");
    LInsert(&list, pcard);

    if(LFirst(&list, &pcard)) {
        if(!NameCompare(pcard, "자크")) 
            ShowNameCardInfo(pcard);

        while(LNext(&list, &pcard)) {
            if(!NameCompare(pcard, "자크") ) {
                ShowNameCardInfo(pcard);
                break;    
            }
        }
    }

    if(LFirst(&list, &pcard)) {
        if(!NameCompare(pcard, "볼리베어")) 
            ChangePhoneNum(pcard, "0000-0000-0002");

        while(LNext(&list, &pcard)) {
            if(!NameCompare(pcard, "볼리베어") )
                ChangePhoneNum(pcard, "0000-0000-0002");
                break;
        }
    }

    if(LFirst(&list, &pcard)) {
        if(!NameCompare(pcard, "자크")) {
           pcard = LRemove(&list);
            free(pcard);
        }

        while(LNext(&list, &pcard)) {
            if(!NameCompare(pcard, "자크") ) {
                pcard = LRemove(&list);
                free(pcard);
                break;
            }
        }
    }
    
      if(LFirst(&list, &pcard)) {
            ShowNameCardInfo(pcard);

        while(LNext(&list, &pcard)) 
            ShowNameCardInfo(pcard);
        }
}