#include<stdio.h>

int main (){
    
    int arr[100], i , j ,lenght, count, temp;
    printf("Enter the lenght of array:");
    scanf("%d", &lenght);
    count = 0;
    while(count < lenght){
        printf("Enter Element %d :", count+1);
        scanf("%d",&arr[count]);
        count++;
    }
    
    for (i = 0; i<lenght-1 ; i++){
        for(j = 0; j<lenght-1  ; j++){
            
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
    
    for (i = 0; i<lenght ; i++){
        printf("Elememt %d: %d\n", i+1 , arr[i]);
    }
    
    return 0;
}
