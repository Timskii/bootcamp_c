#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif
//size = sizeof(arr); 

void my_first_struct(integer_array* param_1)
{
    printf("%d\n", param_1->size);
    for (int i = 0; i<param_1->size; i++){
        printf("%d\n",param_1->array[i]);
    }
    
}
/*
int main(){
    int *arr;
    arr=(int*)malloc(5*sizeof(int));
    arr=(int[]){3,1,4,5,2};
    integer_array ir = { 5, arr};
    my_first_struct(&ir);
}
*/