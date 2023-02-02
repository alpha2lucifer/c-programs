#include <stdio.h>

int main(){
    int i,sum,max,min,avg,size;
    printf("ENter array length : \n");
    scanf("%d",&size);
    
    int ara[size];
    
    printf("Enter array elements:\n");
    for(i = 0; i < size;  i++){
        scanf("%d", &ara[i]);
    }