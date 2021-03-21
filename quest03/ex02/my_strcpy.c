/*
**
** QWASAR.IO -- my_strcpy
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {char*}
**
*/

char* my_strcpy(char* param_1, char* param_2)
{
    int i;

    for (i = 0; param_2[i] != '\0'; i++)
        param_1[i] = param_2[i];

    return param_1;
}

/*
Example of main
*/
/*#include <stdio.h>

int main() {
  char dst[100] = {0};
  char *src     = "Hello";
  
  printf("my_strcpy -> %s\n", my_strcpy(dst, src));
  return 0;
}*/