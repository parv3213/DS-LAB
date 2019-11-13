#include<stdio.h>

int main (){
    
    int arr[10] = {1,2,6,4,9,23,6,24,0,1};
    int  i , j ,lenght, temp, min = 0; 
    int count = 0;
    lenght = 10;  

    for(i = 1; i< lenght ; i++)
    {
        temp = arr[i];
        for(j = i-1; j >= 0 && arr[j] > temp; j-- )
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
    
    for (i = 0; i<lenght ; i++){
        printf("Elememt %d: %d\n", i+1 , arr[i]);
    }
    
    return 0;
}
