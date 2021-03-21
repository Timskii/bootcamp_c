/*
**
** QWASAR.IO -- my_strrchr
**
** @param {char*} param_1
** @param {char} param_2
**
** @return {char*}
**
*/
#include <stdio.h>
#include <string.h>

char* my_strrchr(char* param_1, char param_2)
{
    int len = strlen(param_1)-1;
    int y = 0;

    for (y = len; y>-1 ; y--){
        
        if (param_1[y] == param_2){
            break;
        }
    }
    
    for (int i = 0; i<y ; i++){
        
        param_1++;
    }

    if(*param_1!=param_2){
        return NULL;
    }

    return param_1;
}
