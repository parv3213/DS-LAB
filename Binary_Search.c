#include<stdio.h>

int main (){
    
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
     int el, i, l, h;
     int mid;

    printf("Enter element to search:");
    scanf("%d", &el);
    
    l = 0, h = 9;

    while (l<=h) 
    {
        mid = (l+h)/2;
        if (arr[mid] == el)
        {
            printf("element found at: %d", (mid+1));
            break;
        }
        else if(arr[mid] < el)
        {
            l = mid+1;
        }
        else{
            h = mid - 1;
        }
    }
    printf("\nDone\n");
    return 0;
}
