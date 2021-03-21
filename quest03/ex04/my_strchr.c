
/*
**
** QWASAR.IO -- my_strchr
**
** @param {char*} param_1
** @param {char} param_2
**
** @return {char*}
**
*/

#include <stdio.h>

char* my_strchr(char* param_1, char param_2)
{
    while( *param_1 != param_2 && *param_1 != '\0')
    {
        param_1++;
    }
    if(*param_1!=param_2){
        return NULL;
    }

    return param_1;

}