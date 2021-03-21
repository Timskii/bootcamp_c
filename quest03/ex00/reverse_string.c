#include <string.h>
#include <stdlib.h>
#include <stdio.h>


char* reverse_string(char* param_1){
    int i;
    char *pStart = param_1; 
    char *pEnd = pStart + strlen(param_1) - 1;

    while (pEnd > pStart){

        char temp = *pStart;

        *pStart = *pEnd;
        *pEnd = temp;
        pStart++;
        pEnd--;
    }

   return param_1;
}

/*
char* reverse_string(const char* param_1)
{
    int len = strlen(param_1);
    char* t2 = (char*)malloc((len+1)*sizeof(char));

    for (int i = 0; i<len ; i++){
        t2[(len-1)-i]=param_1[i];
    }
    t2[len] = '\0';
    return t2;
}*/