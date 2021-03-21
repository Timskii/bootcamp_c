/*
**
** QWASAR.IO -- my_union
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {char*}
**
*/

#include <string.h>
#include <stdlib.h>


char* my_union(char* param_1, char* param_2)
{
    int n = strlen(param_1)+strlen(param_2);
    char *str = malloc(n+1);
    
    strcat(str, param_1);
    strcat(str, param_2);

    int i = 0, j = 0, k = 0;    

    for(i = 0; i < n; i++){
        for(j = i+1; j < n; ){
            if(str[j] == str[i]){
                for(k = j; k < n; k++)
                {
                    str[k] = str[k+1];
                }
                n--;
            }
            else{
                j++;
            }
        }
    }

    return str;
}

