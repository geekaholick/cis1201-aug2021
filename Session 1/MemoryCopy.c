#include <stdio.h>


int main() {
    int list[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *aList, *bList;


    memcpy(aList, list, sizeof(int)*5); // 1, 2, 3, 4, 5


    memcpy(bList, &list[4], sizeof(int)*3); // 5 6 7 


    
    return 0;
}