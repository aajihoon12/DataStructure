#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "CH03_NameCard.h"

NameCard * MakeNameCard(char * name, char * phone) {
    NameCard * pcard = (NameCard*)malloc(sizeof(NameCard));
    strcpy(pcard->name, name);
    strcpy(pcard->phone, phone);
    return pcard;
}

void ShowNameCardInfo(NameCard * pcard) {
    printf("�̸�: %s \n", pcard->name);
    printf("�ڵ���: %s \n\n", pcard->phone);
}

int NameCompare(NameCard * pcard, char * name) {
    return strcmp(pcard->name, name);
}

void ChangePhoneNum(NameCard * pcard, char * phone) {
    strcpy(pcard->phone, phone);
}