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


char* my_join(string_array* param_1, char* param_2)
{

    char* joined = NULL;                /* pointer to joined string w/sep */
    size_t lensep = strlen (param_2),       /* length of separator */
        sz = 0;                         /* current stored size */
    int first = 1;                      /* flag whether first term */
    int cnt = 0;

    while (cnt<param_1->size) {                        /* for each string in s */
        size_t len = strlen (*param_1->array);
        /* allocate/reallocate joined */
 
        void *tmp = realloc (joined, sz + len + (first ? 0 : lensep) + 1);
 
        if (!tmp) {  
            
            perror ("realloc-tmp");     /* handle error (adjust as req'd) */
            exit (EXIT_FAILURE);
        }

        joined = tmp;                   /* assign allocated block to joined */
        if (!first) {                   /* if not first string */
            strcpy (joined + sz, param_2);  /* copy separator */
            sz += lensep;               /* update stored size */
        }
        
        strcpy (joined + sz, *param_1->array++);     /* copy string to joined */
        
        first = 0;                      /* unset first flag */
        sz += len;                      /* update stored size */
        cnt++;
    }
    
    return joined; 
}