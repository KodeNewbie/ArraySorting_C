#include <stdio.h>

int main()
{
    int arr[100] = {0}, arrLimit;
    
    printf("Enter the no of array elements [ 1 to 100 ] :  ");
    scanf("%d", &arrLimit);

    // taking inputs for array
    for (int i=0; i<=arrLimit-1; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    
    //Sorting of array
    for (int i=0; i<=arrLimit-2; i++)
    {
        for (int j=0; j<=arrLimit-2-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    //printing sorted array
    printf("\nSorted Array : ");
    for (int i=0; i<=arrLimit-1; i++) printf("\t%d", arr[i]);
    
    return 0;
}