#include <stdio.h>

int BSearch(int ar[], int len, int target) {
    int first = 0;
    int last = len - 1;
    int mid;
    int opt = 0;

    while(first <= last) {
        mid = (first + last)/2;
        
        if(target == ar[mid]) {
            return mid;
        }else {
            if(target < ar[mid])
                last = mid-1;
            else
                first =mid+1;

        opt++;
        }
    }
    printf("Number of Comparison Operations \n");
    return -1;
}

main() {
    int arr[] = {1, 3, 5, ,7, 9};
    int idx;

    idx = BSearch(arr, sizeof(arr)/sizeof(int), 7);
    if(idx == -1)
        printf("Navigation Failure \n");
    else
        printf("Target saved index : %d \n", idx);

    return 0;  
}