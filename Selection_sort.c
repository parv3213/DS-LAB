#include<stdio.h>

int main (){
    
    int arr[10] = {1,2,6,4,9,23,6,24,0,1};
    int  i , j ,lenght, temp, min = 0; 
    int count = 0;
    // printf("Enter the lenght of array:");scanf("%d", &lenght);
    
    // while(count < lenght){
    //     printf("Enter Element %d :", count+1);
    //     scanf("%d",&arr[count]);
    //     count++;
    // }
    lenght = 10;    
    for (i = 0; i < (lenght -1) ; i++)
    {
        min  = i;

        for ( j = i+1; j < lenght ; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    
    for (i = 0; i<lenght ; i++){
        printf("Elememt %d: %d\n", i+1 , arr[i]);
    }
    
    return 0;
}
