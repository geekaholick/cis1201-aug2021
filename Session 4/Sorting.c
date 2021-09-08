#include<stdio.h>
#define MAX 10

void display(int arr[], int count);
void insertionSort(int arr[], int count);

int main() {
    int myArray[MAX] = {4, 7, 10, 2, 1, 5, 8, 3, 6, 9};
    int n = 10;

    display(myArray, n);
    insertionSort(myArray, n);
    display(myArray, n);

    return 0;
}

void display(int arr[], int count) {
    int i;

    printf("{");
    for(i=0; i<count; ++i) {
        printf("%d", arr[i]);
        if(i<count-1) {
            printf(", ");
        }
    }
    printf("}\n");
}

void insertionSort(int arr[], int count) {
    int i, j, temp;

    for(i = 1; i < count; ++i) {
        temp = arr[i];
        for(j = i-1; j >= 0; --j) {
            if(temp < arr[j]) {
                //move
                arr[j+1] = arr[j];
            } else {
                break;
            }
        }
        arr[j+1] = temp;
        // display(arr, count);
    }
}