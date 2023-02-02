#include <iostream>
using namespace std;
void create_heap(int *arr, int end, int current )
{
    int temp;
    int parent = (current + 1) / 2 - 1;
    if (current != 0)
    {
        while (arr[parent] < arr[current])
        {
            temp = arr[parent];
            arr[parent] = arr[current];
            arr[current] = temp;
            current = parent;
            int parent = (current + 1) / 2 - 1;
        }
        if(current<end){
            create_heap(arr,)
        }
    }
}

int main()
{
    int arr[] = {};
    int length = sizeof(arr) / sizeof(int);
    return 0;
}