/*
**
** QWASAR.IO -- my_print_words_array
**
** @param {string_array*} param_1
**
** @return {void}
**
*/

#include <stdio.h> 
#include <unistd.h>
#include <strings.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif


void my_print_words_array(string_array* param_1)
{
	for (int i = 0; i < param_1->size; ++i)
	{
		write(1, param_1->array[i], strlen(param_1->array[i]));
        write(1, "\n", 1);
	}
}