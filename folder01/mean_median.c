/*
#include <stdio.h>

int main(){
    int i,sum,max,min,avg,size;
    printf("ENter array length : \n");
    scanf("%d",&size);

    int ara[size];

    printf("Enter array elements:\n");
    for(i = 0; i < size;  i++){
        scanf("%d", &ara[i]);
        findmean(ara)
    }
}
double findMean(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return (double)sum / (double)n;
}
*/
#include < stdio.h >
int main()
{
    int a[25], n, i;
    float mean = 0, sum = 0;
    printf(" Enter the Numbers of terms: ");
    scanf("%d ", &n);
    printf("\n Enter the Numbers : \n");
    for (i = 1; i < = n; i++)
    {
        scanf("%d ", &a[i]);
    }
    for (i = 1; i < = n; i++)
    {
        sum = sum + a[i];
        avg = sum / n;
    }
    printf("\n Mean of entered Numbers are : %f ", mean);
    return (0);
}