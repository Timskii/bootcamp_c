/*
**
** QWASAR.IO -- my_count_on_it
**
** @param {string_array*} param_1
**
** @return {integer_array*}
**
*/
#include <strings.h>
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


integer_array* my_count_on_it(string_array* param_1)
{
	int *arr;
    arr=(int*)malloc(param_1->size*sizeof(int));

	for (int i = 0; i < param_1->size; ++i)
	{
		arr[i] = strlen(param_1->array[i]);
	}
	integer_array* ir = malloc(sizeof(integer_array));
    ir->size = param_1->size;
    ir->array = arr;
	return ir;
}