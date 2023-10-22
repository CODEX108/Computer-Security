#include <stdio.h>    
     
int main()    
{    
    //Initialize array     
    int arr[50] = {1, 2, 3, 4, 5};     
    //Calculate length of array    
    int length = sizeof(arr)/sizeof(arr[0]);   
    printf (" length is :%d\t\n",length) ;
        
    printf("Elements of given array: \n");    
    //Loop through the array by incrementing value of i     
    for (int i = 0; i < 5; i++) {     
        printf("%d ", arr[i]);     
    }      
     
    return 0;    
}      