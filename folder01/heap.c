#include <stdio.h>
#include <conio.h>
#include <windows.h>

void restoreup(int, int*);
void restoredown(int, int*, int);
void makeheap(int*, int);
void add(int, int*, int);
int replace(int, int*, int);
int del(int*, int*);

int main()
{
    int arr[20]={100, 7, 10, 25, 17, 23, 27, 18, 19, 37, 42, 4, 33, 1, 5, 11};
    int i, n=15;

    system("cls");
    makeheap(arr, n);

    printf("Heap :\n");
    for(i=1; i<=n; i++)
    {
        printf("%d\t",arr[i]);
    }

    i=24;
    add(i, arr, &n);

    printf("\n\n");
    printf("Element added %d.\n\n", i);
    printf("Heap after addition of element :\n");
    for(i=1; i<=n; i++)
    {
        printf("%d\t",arr[i]);
    }
    i= replace(2, arr, n);
    printf("\n\n");
    printf("Element replaced %d.\n\n", i);
    printf("Heap after repacement of an element :\n");
    for(i=1; i<=n; i++)
    {
        printf("%d\t",arr[i]);
    }
    i=del(arr, &n);
    printf("\n\n");
    printf("Element deleted %d.\n\n", i);
    printf("Heap after deletion of element :\n");
    for(i=1; i<=n; i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;

}

void restoreup(int i, int *arr)
{
    int val;
    val=arr[i];
    while(arr[i/2]<= val)
    {
        arr[i]=arr[i/2];
        i=i/2;
    }
    printf("");
    printf("");
    printf("");
    printf("");
    printf("");
    printf("");
}