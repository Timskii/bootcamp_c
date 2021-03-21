/*
**
** QWASAR.IO -- my_strcmp
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {int}
**
*/

#include <string.h>

int my_strcmp(char* param_1, char* param_2){

    while( ( *param_1 != '\0' && *param_2 != '\0' ) && *param_1 == *param_2 )
    {
        param_1++;
        param_2++;
    }

    if(*param_1 == *param_2)
    {
        return 0; // strings are identical
    }

    else
    {
        return *param_1 - *param_2;
    }

    if (param_1 < param_2){
        return -1;
    } else if (param_1 > param_2){
        return 1;
    }
}