#include <stdio.h>
int main(void){
    int size, i;
    printf("Enter the size of the arrays:\n");
    scanf("%d", &size);
    
    int arr1[size];
    for (i = 0; i < size; i++) {
        printf("Enter the element of the array:\n");
        scanf("%d", arr1[size]);
    }
    printf("The current array is:\n %d", arr1[i]);
    return 0;
}