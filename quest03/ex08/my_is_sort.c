/*
**
** QWASAR.IO -- my_is_sort
**
** @param {integer_array*} param_1
**
** @return {bool}
**
*/
#include <stdbool.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


bool my_is_sort(integer_array* param_1)
{
    int a = 1, d = 1, i;
    i=0;

    while ((a == 1 || d == 1) && i < param_1->size - 1) {
    if (param_1->array[i] < param_1->array[i+1])
        d = 0;
    else if (param_1->array[i] > param_1->array[i+1])
        a = 0;
    i++;
    }

    if (a == 1 || d == 1)
        return true;
    else
        return false;
}