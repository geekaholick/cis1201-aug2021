#include <stdbool.h>
#include <stdio.h>

// typedef enum {false, true} Boolean;
typedef bool Set[20];

int main(void) {
    Set A;
    int i;

    for(i = 0; i < 20; ++i) {
        A[i] = false;
    }

    A[0] = true;
    A[5] = true;

    printf("Set a = {");
    for(i=0; i < 20; ++i) {
        if(A[i]) {
            printf("%d ", i);
        }
    }
    printf("}\n");

    return 0;
}