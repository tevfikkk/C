#include <stdio.h>

// 

void Array_Swap(int *array , int n)   // function to swap the array elements
{ 
    // declare some local variables
    int i=0,temp=0;

    for(i=0 ; i<n/2 ; i++)
    {
        temp = array[i];
        array[i] = array[n-i-1]; //This is the part where everything is happening
        array[n-i-1] = temp;
    }
}

int main(void)
{
    
    int array_1[30] = {0};		// declaring an int array
    int* ptr;
    
    ptr = array_1;
    
    int i=0 ,n=0;		// declaring some local variables
    
    printf("\nEnter the number of elements for the array : ");
    scanf("%d",&n);
   
    printf("\nEnter the elements for array_1..\n");
    for(i=0 ; i<n ; i++)
    {
        printf("array_1[%d] : ",i);  // We'll get elements
        scanf("%d",&ptr[i]);
    }
    
    
    Array_Swap(ptr , n);		// Sort the array in ascending order

    printf("\nThe array after swap is..\n");
    for(i=0 ; i<n ; i++)
    {
        printf("\narray_1[%d] : %d",i,ptr[i]); // To show them
    }
    
    return 0;
}
