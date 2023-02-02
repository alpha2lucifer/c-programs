#include <stdio.h>

int main(){
    int i,sum,max,min,avg,size;
    printf("ENter array length : \n");
    scanf("%d",&size);
    
    int ara[size];
    
    printf("Enter array elements:\n");
    for(i = 0; i < size;  i++)
        scanf("%d", &ara[i]);
    
    
    sum=0;
    max=ara[0];
    min=ara[0];
    printf("your array elements are \n");
    for(i = 0; i < size; i++){
        printf("%d;\t",ara[i]);
        sum+=ara[i];
        if(ara[i] > max){
            max = ara[i];
        }
        if(ara[i] < min){
            min = ara[i];
        }
    }
    avg=sum/size;
    
    printf("\nSum is %d\n",sum);
    printf("\nAverage is %d\n",avg);
    printf("\nMax number is %d\n",max);
    printf("\nMin number is %d\n",min);
    
    
    return 0;
}