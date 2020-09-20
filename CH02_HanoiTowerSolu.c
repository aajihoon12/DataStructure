#include <stdio.h>

void HanoiTowerMove(int num, char from, char by, char to) {
    if(num == 1) {
        printf("Move dish1 %c to %c \n", from, to);
    }else{
        HanoiTowerMove(num-1, from, to ,by);
        printf("Move dish%d %c to %c \n",num, from, to);
        HanoiTowerMove(num-1, by, from , to);
    }
}

main() {
    HanoiTowerMove(3, 'A', 'B', 'C');
    return 0;
}