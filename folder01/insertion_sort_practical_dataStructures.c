#include <stdio.h>
void insertionSort(int aRR[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++){
        temp = aRR[i];
        j = i - 1;
        while (j >= 0 && temp <= aRR[j]) 
        {
            aRR[j + 1] = aRR[j];
            j = j - 1;
        }
        aRR[j + 1] = temp;
    }
}
void printTheArray(int aRR[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", aRR[i]);
}
int main()
{
    int aRR[] = {10, 20, 12, 32, 46, 88, 25};
    int n = sizeof(aRR) / sizeof(aRR[0]);
    printf("Before sorting array elements are : \n");
    printTheArray(aRR, n);
    insertionSort(aRR, n);
    printf("\nAfter sorting array elements are : \n");
    printTheArray(aRR, n);
    return 0;
}