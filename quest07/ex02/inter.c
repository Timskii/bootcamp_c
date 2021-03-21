/*
**
** QWASAR.IO -- inter
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {char*}
**
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* inter(char* param_1, char* param_2){
char *res = malloc(strlen(param_1) + strlen(param_2)+1);
int j=0;
    for(int i = 0 ; i < strlen(param_1);i++){
        if(strchr(param_2,param_1[i]) != NULL && strchr(res,param_1[i])==NULL){
            res[j] = param_1[i];
            j++;
        }
    }
    return res;
}


//int main(){
  //  printf ("%s\n", inter("ddf6vewg64f", "gtwthgdwthdwfteewhrtag6h4ffdhsd"));
//}