/*
**
** QWASAR.IO -- hidenp
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {int}
**
*/

#include <string.h>

int 
hidenp(char* param_1, char* param_2)
{
    int k = 0;
    for (int i = 0; i<strlen(param_2); i++){
        if(param_1[k]==param_2[i]){
            k++;
        }
    }
    return(k==strlen(param_1));
}