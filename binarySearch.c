#include <stdio.h>
#include <stdlib.h>


int binarySearch(int* array,int size,int target);

int main() {
    int n = 100000000;//change it to what number you want
    int* array = malloc(n * sizeof(int));
    //int target = 80;
    int target;
    
    //printf("Enter the Maxmium Number: ");
    //scanf("%d", &n);

    printf("Enter the Target Number: ");//    {******}
    scanf("%d", &target);//                   {|____|}
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // exit with error
    }

    for (int i = 0; i < n; i++) {
        array[i] = i;
    }

    // Use the array as required...
    int index = binarySearch(array, n,target);//the number

    if(index == -1){
        printf("\n%d  not found",target);
    }
    else{
        printf("\nElement found at: %d", index);
    }

    free(array);  // don't forget to free the memory when done

    return 0;
}
int binarySearch(int* array,int size,int target){
    int low = 0;
    int high = size - 1;
    int count = 0;
    while (low <= high){

        int middle = low + (high - low) / 2;
        int value = array[middle];
        
        printf("\n%d: %d",count,value);
        if(value == target){
            return middle;
        }
        else if(value < target){
            low = middle + 1;
        }
        else{
            high = middle - 1;
        }
        count ++;
    }
    
    return -1;
}
