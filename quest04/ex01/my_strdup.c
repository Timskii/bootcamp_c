/*
**
** QWASAR.IO -- my_strdup
**
** @param {char*} param_1
**
** @return {char*}
**
*/
#include <stdlib.h>
#include <strings.h>

char* my_strdup(char* param_1)
{
	char* text;
	text = (char*)malloc(strlen(param_1)*sizeof(char));
	text = param_1;

	return text;
}