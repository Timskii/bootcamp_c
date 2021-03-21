/*
**
** QWASAR.IO -- my_range
**
** @param {int} param_1
** @param {int} param_2
**
** @return {int*}
**
*/

#include <stdlib.h>

int* my_range(int param_1, int param_2)
{

    int *arr;
    int cnt = 0;
    arr=(int*)malloc((param_2 - param_1)*sizeof(int));
    

	for (int i = param_1; i < param_2; i++)
	{
		arr[cnt] = i;
		cnt++;
	}

	return arr;
}

/*
#include <stdio.h> 
int main()
{
	int *arr;
	arr = my_range(3, 10);

	for (int i = 0; i < 7; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
*/