/*
**
** QWASAR.IO -- my_split
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {string_array*}
**
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif


char ** my_strtok(char* str){

}

string_array* 
my_split(char* param_1, char* param_2)
{
    int len = strlen(param_1);
    int i = 0;
    char str[len];
    char **array = malloc(len*sizeof(char*));
    strcpy(str, param_1);
    char * token = strtok(str, param_2);
    
    while( token != NULL ) {
        array[i] = token;
        i++;
        token = strtok(NULL, param_2);
    }
    string_array* sa = malloc(sizeof(string_array));
    sa->size = i;
    sa->array = malloc(i*sizeof(array));

    for(i = 0; array[i] != NULL; i++){
        sa->array[i] = malloc(strlen(array[i]));
        strcpy(sa->array[i], array[i]);
    }
    return sa;

}

int 
main (){
    string_array* sa = my_split("Hello! We are learning about strtok", " ");

    for (int j = 0; j<sa->size; j++){
        printf("[%s], ", sa->array[j]);
    }
}