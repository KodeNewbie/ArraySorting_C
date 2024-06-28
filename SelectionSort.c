#include <stdio.h>

int main()
{
    int arr[100] = {0}, arrLimit;
    
    input:
    printf("Enter the no of array elements [ 1 to 100 ] :  ");
    scanf("%d", &arrLimit);
    
    if (arrLimit<1 || arrLimit>100) { printf("Error : Invalid input.\n"); goto input; }
    // taking inputs for array
    for (int i=0; i<=arrLimit-1; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    
    //Sorting of array
    for (int i=0; i<=arrLimit-2; i++)
    {
        for (int j=i+1; j<=arrLimit-1; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    //printing sorted array
    printf("\nSorted Array : ");
    for (int i=0; i<=arrLimit-1; i++) printf("\t%d", arr[i]);
    
    return 0;
}