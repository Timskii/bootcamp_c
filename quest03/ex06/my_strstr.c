/*
**
** QWASAR.IO -- my_strstr
**
** @param {char*} str
** @param {char*} substr
**
** @return {char*}
**
*/
#include <stdio.h>
#include <string.h>


char* my_strstr(char* str, char* substr)
{
    if (strcmp(str,substr)==0) {
        return str;
    }
	  while (*str) 
	  {
		    char *Begin = str;
		    char *pattern = substr;
		    
		    // If first character of sub string match, check for whole string
		    while (*str && *pattern && *str == *pattern) 
			{
			      str++;
			      pattern++;
		    }
		    // If complete sub string match, return starting address 
		    if (!*pattern)
		    	  return Begin;
		    	  
		    str = Begin + 1;	// Increament main string 
	  }
	  return NULL;
}
/*
{
    if (strcmp(param_1, param_2)==0){
        return param_1;
    }
    if(strcmp(param_2, "")==0){
        return param_1;
    }
    if(strlen(param_1)< strlen(param_2)){
        return NULL;
    }
    while( *param_1 != *param_2 && *param_1 != '\0')
    {
        param_1++;
    }
    if(*param_1!=*param_2){
        return NULL;
    }

    return param_1;
}
*/
/*
int main() {
  char *str_1 = "mississippi";
  char *str_2  = "issip";
  
  printf("my_strcpy -> %s\n", my_strstr(str_1, str_2));
  return 0;
}
*/