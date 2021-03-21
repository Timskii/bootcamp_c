#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  


// Function to perform Selection Sort 
char *
selectionSort(char* arr, int n) 
{ 
    int i, j, min_idx; 
    int len = strlen(arr);
    char tmp;

    //arr = param_1;
  
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < n - 1; i++) { 

        // Find the minimum element in unsorted array 
        min_idx = i; 
        for (j = i + 1; j < n; j++) 
            if (arr[j] < arr[min_idx]) 
                min_idx = j; 
  
        // Swap the found minimum element 
        // with the first element 
        tmp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = tmp;
        
    } 
    return arr; 
} 
  

int is_anagram(char* str1, char* str2)
{
    int cmp=0;
    char *arr1 = malloc(strlen(str1));
    char *arr2 = malloc(strlen(str2));

    strcat(arr1, str1);
    strcat(arr2, str2);

    arr1 = selectionSort(arr1, strlen(str1));
    arr2 = selectionSort(arr2, strlen(str2));

    //printf("arr1 = %s\n", arr1);
    //printf("arr2 = %s\n", arr2);

    cmp = strcmp(arr1,arr2);

    if (cmp == 0) {
        return 1;
    }else {
        return 0;
    }
}
/*
int main ()
{
    printf("%d\n", is_anagram("abcdef", "fabcde"));
}
*/