#include <stdio.h>
#include <string.h>

void addList(int a[], int *count, int item) {
    if(*count < 5) {
        a[*count++] = item;
    }
}

void display(int a[], int count) {
    int x;

    for(x = 0; x<count; x++){
        printf("%d ", *(a+x));  // a[x]
    }

}

int main(void)
{
    int x[5] = {1, 2, 3, 4, 5};
    int y[5];
    
    // memcpy(y, x, sizeof(int)*5);
    // display(y, 5);

    memcpy(&y[0], x+1, sizeof(int)*3);
    display(y, 3);
}