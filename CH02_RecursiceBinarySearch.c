#include <stdio.h>

int BSearch(int ar[], int first, int last, int target) {
    int mid;

    if(first > last)
        return -1;
    
    mid = (first + last) /2;

    if(ar[mid] == target) 
        return mid;
    else if(ar[mid] > target)
            BSearch(ar, first, mid-1, target);
    else
        BSearch(ar, mid+1, last, target); 
 
}

main() {
    int arr[] = {1, 3, 5, 7, 9};
    int idx;

    idx = BSearch(arr, 0, sizeof(arr)/sizeof(int)-1, 7);
    if(idx == -1)
        printf("Navigation Failure \n");
    else
        printf("Target saved index : %d \n", idx);

    return 0;  
}